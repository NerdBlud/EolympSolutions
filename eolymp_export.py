#!/usr/bin/env python3
"""
Export all of your 100% (fully accepted) Eolymp solutions into folders:

    eolymp_solutions/
        1-1000/
            1 - Simple problem.cpp
            2218 - Coins.cpp   (goes to 2001-3000, see below)
        1001-2000/
        2001-3000/
            2218 - Coins.cpp

Usage:
    pip install requests
    export EOLYMP_TOKEN="etkn-..."          # API key from https://eolymp.com/developer
    python eolymp_export.py                  # saves into ./eolymp_solutions
    python eolymp_export.py --dry-run        # only show what would be saved

API key scopes needed: atlas:submission:read  and  atlas:problem:read
"""

from __future__ import annotations

import argparse
import json
import os
import re
import sys
import time
from pathlib import Path
from urllib.parse import urlparse

try:
    import requests
except ImportError:
    sys.exit("The 'requests' package is missing. Install it with:  pip install requests")

DEFAULT_API = os.environ.get("EOLYMP_API_URL", "https://api.eolymp.com")

# The public eolymp.com archive (this is the space id the website itself uses in its API calls).
PUBLIC_SPACE_ID = "00000000-0000-0000-0000-000000000000"

# Runtime id prefix (e.g. "cpp:23-gnu14", "python:3.13-python") -> file extension
EXT_BY_PREFIX = {
    "cpp": "cpp", "c++": "cpp", "c": "c", "python": "py", "pypy": "py",
    "java": "java", "csharp": "cs", "cs": "cs", "go": "go", "golang": "go",
    "rust": "rs", "kotlin": "kt", "javascript": "js", "nodejs": "js", "node": "js",
    "typescript": "ts", "pascal": "pas", "fpc": "pas", "php": "php", "ruby": "rb",
    "haskell": "hs", "swift": "swift", "scala": "scala", "perl": "pl", "lua": "lua",
    "dart": "dart", "ocaml": "ml", "d": "d", "fsharp": "fs", "sql": "sql",
    "bash": "sh", "text": "txt", "plain": "txt",
}


# --------------------------------------------------------------------------- #
# Small helpers (pure functions)
# --------------------------------------------------------------------------- #
def _snake_key(k: str) -> str:
    return re.sub(r"(?<=[a-z0-9])([A-Z])", lambda m: "_" + m.group(1).lower(), k)


def snake_keys(obj):
    """The API may answer in camelCase (problemId) or snake_case (problem_id); normalise to snake_case."""
    if isinstance(obj, dict):
        return {_snake_key(k): snake_keys(v) for k, v in obj.items()}
    if isinstance(obj, list):
        return [snake_keys(v) for v in obj]
    return obj


def folder_for(number: int) -> str:
    """1..1000 -> '1-1000', 1001..2000 -> '1001-2000', 2001..3000 -> '2001-3000'."""
    lo = ((number - 1) // 1000) * 1000 + 1
    return f"{lo}-{lo + 999}"


def safe_filename(text: str) -> str:
    text = re.sub(r'[<>:"/\\|?*\x00-\x1f]', " ", text)
    text = re.sub(r"\s+", " ", text).strip().rstrip(". ")
    return text or "untitled"


def ext_for(lang: str) -> str:
    lang = (lang or "").strip().lower()
    prefix = re.split(r"[:\s]", lang, maxsplit=1)[0]
    if prefix in EXT_BY_PREFIX:
        return EXT_BY_PREFIX[prefix]
    # fallbacks for human-readable names like "C++ 23 (gnu 14.2)"
    if "c++" in lang:
        return "cpp"
    if "python" in lang or "pypy" in lang:
        return "py"
    return re.sub(r"[^a-z0-9]", "", prefix) or "txt"


def get_problem_id(sub: dict) -> str | None:
    pid = sub.get("problem_id")
    if not pid and isinstance(sub.get("problem"), dict):
        pid = sub["problem"].get("id")
    return pid or None


def owner_of(sub: dict) -> str | None:
    return sub.get("user_id") or sub.get("member_id") or None


def is_full_score(sub: dict) -> bool:
    """True only for submissions that passed everything (100%)."""
    if sub.get("status") != "COMPLETE":
        return False
    if sub.get("verdict") != "ACCEPTED":
        return False
    cost, score = sub.get("cost"), sub.get("score")
    if cost and score is not None and score + 1e-6 < cost:
        return False
    pct = sub.get("percentage")  # may be a 0..1 ratio or 0..100, so accept both
    if pct is not None and not (abs(pct - 1) < 1e-6 or abs(pct - 100) < 1e-6):
        return False
    return True


# --------------------------------------------------------------------------- #
# API client
# --------------------------------------------------------------------------- #
class ApiDenied(RuntimeError):
    """The server refused / could not find one specific resource (403/404)."""


class Eolymp:
    def __init__(self, token: str, api: str = DEFAULT_API, debug: bool = False):
        token = token.strip().strip("\"'").strip()
        if token.lower().startswith("bearer "):
            token = token[7:].strip().strip("\"'").strip()
        self.token = token
        self.api = api.rstrip("/")
        self.debug = debug
        self.session = requests.Session()
        self.session.headers.update({
            "Authorization": f"Bearer {self.token}",
            "Accept": "application/json",
        })

    def get_json(self, path: str, params=None, retries: int = 6, auth: bool = True, soft: bool = False):
        url = self.api + path
        for attempt in range(retries):
            try:
                if auth:
                    r = self.session.get(url, params=params, timeout=60)
                else:
                    r = requests.get(url, params=params, timeout=60,
                                     headers={"Accept": "application/json"})
            except requests.RequestException as e:
                if attempt == retries - 1:
                    raise RuntimeError(f"network error: {e}")
                wait = 2 ** attempt
                print(f"  network error ({e}); retrying in {wait}s...")
                time.sleep(wait)
                continue
            if r.status_code == 429 or r.status_code >= 500:
                wait = min(60, 2 ** attempt * 2)
                print(f"  server said {r.status_code}; retrying in {wait}s...")
                time.sleep(wait)
                continue
            if soft and r.status_code in (403, 404):
                raise ApiDenied(f"{r.status_code} for {path}: {r.text[:120]}")
            if r.status_code in (401, 403):
                self._explain_auth_failure(path, r)
            if not r.ok:
                raise RuntimeError(f"GET {url} -> {r.status_code}: {r.text[:500]}")
            return snake_keys(r.json())
        raise RuntimeError(f"GET {url} failed after {retries} attempts")

    def _explain_auth_failure(self, path, r):
        """Work out whether the token itself is bad or only this endpoint rejects it."""
        probe = "could not run"
        try:
            pr = requests.get(self.api + "/oauth2/userinfo", timeout=30,
                              headers={"Authorization": f"Bearer {self.token}"})
            probe = f"HTTP {pr.status_code}: {pr.text[:200]}"
            token_ok = pr.ok
        except requests.RequestException as e:
            probe, token_ok = f"network error {e}", None
        www = r.headers.get("WWW-Authenticate", "-")
        msg = [
            f"\nAuthorization failed ({r.status_code}) for {path}",
            f"  server said      : {r.text[:300]}",
            f"  WWW-Authenticate : {www}",
            f"  token starts with: {self.token[:5]}...  (length {len(self.token)})",
            f"  token check (/oauth2/userinfo): {probe}",
            "",
        ]
        if token_ok is False:
            msg += [
                "NOTE: the /oauth2/userinfo check can reject valid tokens issued by a space, so it is only a hint.",
                "Most likely causes: wrong space id (default is the public archive, change with --space),",
                "or the token is expired, incomplete or not a login token.",
                "Browser tokens are short-lived. Reload https://eolymp.com with F12 -> Network open,",
                "copy the value after 'Bearer ' from a FRESH GET/POST request to api.eolymp.com",
                "(not the OPTIONS one), and run this script within a minute or so.",
                "If you pasted an 'ekey-' key: that is an API key, which this API did not accept either.",
            ]
        elif token_ok:
            msg += [
                "The token is valid but this endpoint rejected it, so the space id or URL is the likely",
                "problem. In the Network tab, open your submissions page on eolymp.com, find the request",
                "that loads the list, and send me its URL (hide the token).",
            ]
        sys.exit("\n".join(msg))

    # -- space ----------------------------------------------------------------
    def resolve_space_id(self, space_arg: str | None) -> str:
        sid = space_arg or PUBLIC_SPACE_ID
        print(f"Using space {sid}" + ("" if space_arg else " (public eolymp.com archive)"))
        return sid

    # -- submissions ----------------------------------------------------------
    def iter_my_submissions(self, space_id: str):
        after, page = None, 0
        while True:
            params = {"size": 100}
            if after:
                params["after"] = after
            data = self.get_json(f"/spaces/{space_id}/submissions", params=params)
            items = data.get("items") or []
            page += 1
            if self.debug and page == 1 and items:
                print("DEBUG first submission:\n" + json.dumps(items[0], indent=2)[:2500])
            print(f"  page {page}: {len(items)} submissions (total reported: {data.get('total', '?')})")
            for it in items:
                yield it
            nxt = data.get("next_page_cursor") or (items[-1].get("cursor") if items else None)
            if not items or not nxt or nxt == after:
                break
            after = nxt

    def describe_submission(self, space_id: str, sub_id: str) -> dict:
        return self.get_json(f"/spaces/{space_id}/submissions/{sub_id}", soft=True).get("submission", {})

    def describe_problem(self, space_id: str, problem_id: str, locale: str) -> dict:
        params = {"locale": locale} if locale else None
        return self.get_json(f"/spaces/{space_id}/problems/{problem_id}", params=params, soft=True).get("problem", {})

    # -- source code ----------------------------------------------------------
    def fetch_source(self, space_id: str, sub: dict) -> bytes | None:
        url = sub.get("source_url")
        if not url and not sub.get("source"):
            sub = self.describe_submission(space_id, sub.get("id", ""))
            url = sub.get("source_url")
        if url:
            host = urlparse(url).hostname or ""
            try:
                if host.endswith("eolymp.com"):
                    r = self.session.get(url, timeout=60)
                else:
                    r = requests.get(url, timeout=60)
                if r.ok:
                    return r.content
                print(f"  could not download source ({r.status_code}) from {url}")
            except requests.RequestException as e:
                print(f"  could not download source: {e}")
        if sub.get("source"):
            return sub["source"].encode("utf-8")
        return None


# --------------------------------------------------------------------------- #
# Selection logic
# --------------------------------------------------------------------------- #
def choose(subs: list[dict], pick: str, prefer_ext: str | None, all_langs: bool) -> list[dict]:
    if pick == "earliest":
        ordered = sorted(subs, key=lambda s: s.get("submitted_at", ""))
    elif pick == "fastest":
        ordered = sorted(subs, key=lambda s: (s.get("time_usage") or 10**9, s.get("submitted_at", "")))
    else:  # latest
        ordered = sorted(subs, key=lambda s: s.get("submitted_at", ""), reverse=True)

    if all_langs:
        seen, result = set(), []
        for s in ordered:
            e = ext_for(s.get("lang", ""))
            if e not in seen:
                seen.add(e)
                result.append(s)
        return result

    if prefer_ext:
        preferred = [s for s in ordered if ext_for(s.get("lang", "")) == prefer_ext]
        if preferred:
            return [preferred[0]]
    return [ordered[0]]


# --------------------------------------------------------------------------- #
# Main
# --------------------------------------------------------------------------- #
def main():
    ap = argparse.ArgumentParser(description="Export your 100% Eolymp solutions to files.")
    ap.add_argument("--token", default=os.environ.get("EOLYMP_TOKEN"),
                    help="API key (or set EOLYMP_TOKEN). Create one at https://eolymp.com/developer")
    ap.add_argument("--out", default="eolymp_solutions", help="output directory")
    ap.add_argument("--space", help=f"space id (default: {PUBLIC_SPACE_ID}, the public eolymp.com archive)")
    ap.add_argument("--locale", default="en", help="language for problem titles (default: en)")
    ap.add_argument("--pick", choices=["latest", "earliest", "fastest"], default="latest",
                    help="which accepted submission to keep when a problem has several (default: latest)")
    ap.add_argument("--prefer-ext", default=None,
                    help="prefer this language when several exist, e.g. cpp or py")
    ap.add_argument("--all-languages", action="store_true",
                    help="keep one file per language instead of one file per problem")
    ap.add_argument("--overwrite", action="store_true", help="overwrite files that already exist")
    ap.add_argument("--dry-run", action="store_true", help="show what would be saved, write nothing")
    ap.add_argument("--allow-multiple-owners", action="store_true",
                    help="do not abort if the list contains several different users")
    ap.add_argument("--skip-unreadable", action="store_true",
                    help="do not save solutions of problems whose details are not publicly readable")
    ap.add_argument("--debug", action="store_true", help="print raw API data for the first submission")
    ap.add_argument("--api", default=DEFAULT_API, help=argparse.SUPPRESS)
    args = ap.parse_args()

    if not args.token:
        sys.exit("No API key. Set EOLYMP_TOKEN or pass --token (create a key at https://eolymp.com/developer).")

    api = Eolymp(args.token, api=args.api, debug=args.debug)
    space_id = api.resolve_space_id(args.space)

    # 1) collect all fully accepted submissions, grouped by problem
    print("Fetching your submissions...")
    by_problem: dict[str, list[dict]] = {}
    total = no_pid = 0
    seen_ids: set = set()
    owners: set = set()
    shown_odd = False
    for sub in api.iter_my_submissions(space_id):
        sid = sub.get("id")
        if sid in seen_ids:
            continue
        seen_ids.add(sid)
        total += 1

        owner = owner_of(sub)
        if owner:
            owners.add(owner)
            if len(owners) > 1 and not args.allow_multiple_owners:
                sys.exit(
                    "\nThe list contains submissions from more than one user, so it is NOT only yours.\n"
                    "I stopped so that nobody else's code gets saved. Re-run with --debug and send me the\n"
                    "first submission it prints (remove any tokens), or use --allow-multiple-owners to override."
                )

        pid = get_problem_id(sub)
        if not pid:
            no_pid += 1
            if not shown_odd:
                shown_odd = True
                print("  note: skipping a submission without a problem id, example:\n"
                      + json.dumps(sub, indent=2, ensure_ascii=False)[:1500])
            continue
        if is_full_score(sub):
            by_problem.setdefault(pid, []).append(sub)
    print(f"Scanned {total} submissions by {len(owners)} user(s) ({no_pid} without problem id); "
          f"{len(by_problem)} problems have a 100% solution.\n")

    # 2) for each problem: get number + title, pick submission(s), save
    out_root = Path(args.out)
    saved = skipped = failed = 0
    unreadable: list = []
    for i, (problem_id, subs) in enumerate(by_problem.items(), 1):
        try:
            problem = api.describe_problem(space_id, problem_id, args.locale)
        except ApiDenied as e:
            # Not a public catalog problem (private / contest-only / removed): never invent a number from the id.
            unreadable.append(problem_id)
            print(f"[{i}/{len(by_problem)}] problem {problem_id}: not publicly readable ({e})")
            if args.skip_unreadable:
                continue
            problem = {"number": 0, "title": f"Problem {problem_id}"}
        except Exception as e:
            print(f"[{i}/{len(by_problem)}] problem {problem_id}: cannot read problem ({e})")
            failed += 1
            continue

        number = problem.get("number") or 0
        title = safe_filename(problem.get("title") or problem_id)
        folder = folder_for(number) if number > 0 else "unnumbered"
        label = number if number > 0 else problem_id

        for sub in choose(subs, args.pick, args.prefer_ext, args.all_languages):
            ext = ext_for(sub.get("lang", ""))
            path = out_root / folder / f"{label} - {title}.{ext}"
            if path.exists() and not args.overwrite:
                print(f"[{i}/{len(by_problem)}] exists, skipped: {path}")
                skipped += 1
                continue
            if args.dry_run:
                print(f"[{i}/{len(by_problem)}] would save: {path}")
                saved += 1
                continue
            try:
                code = api.fetch_source(space_id, sub)
            except ApiDenied as e:
                print(f"[{i}/{len(by_problem)}] source not readable for {label} ({e})")
                code = None
            if code is None:
                print(f"[{i}/{len(by_problem)}] no source available for {label} - {title}")
                failed += 1
                continue
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(code)
            print(f"[{i}/{len(by_problem)}] saved: {path}")
            saved += 1
            time.sleep(0.05)

    if unreadable:
        where = "skipped" if args.skip_unreadable else "saved in the 'unnumbered' folder"
        print(f"\n{len(unreadable)} problem(s) are not public catalog problems and were {where}: "
              + ", ".join(unreadable))
    print(f"\nDone. saved={saved}  skipped(existing)={skipped}  failed={failed}")
    if not args.dry_run:
        print(f"Output folder: {out_root.resolve()}")


if __name__ == "__main__":
    try:
        main()
    except RuntimeError as e:
        sys.exit(f"\nError: {e}\nTip: run with --debug, and check the token and --space value.")
    except KeyboardInterrupt:
        sys.exit("\nInterrupted.")