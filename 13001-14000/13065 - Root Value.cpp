#include <bits/stdc++.h>
using namespace std;

/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡆
⠀⠀⠀⠀⠀⢀⣶⣆⢀⠔⠁⠀⣷
⠀⠀⠀⠀⠀⠚⣿⣿⣷⡄⠀⠀⢸
⠀⠀⠀⠀⠀⣠⣺⣿⣿⡇⠀⠀⠸
⠀⠀⠀⠀⡸⣿⣿⣿⣿⡇⠀⠀⠀
⠀⠀⠀⡔⠁⢸⣿⣿⣿⣿⠀⠀⠀
⠀⠀⠌⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀
⠀⡌⠀⠀⠀⠀⢸⣿⣿⣿⡇⠀⠀
⠈⠀⠀⠀⠀⠀⢸⣿⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣷⠀⠀
⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣷⣄
⠀⠀⠀⠀⠀⠀⠛⠛⠛⠛⠛⠛⠉  written by: nerdblud.
*/

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define ar array
#define all(a) (a).begin(), (a).end()
#define sza(x) ((int)x.size())
#define pb push_back
#define makemycodefaster ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

vi p;
int c[205][50];

bool check(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void init() {
    for (int i = 2; i <= 200; i++) {
        if (check(i)) p.pb(i);
    }
    for (int i = 2; i <= 200; i++) {
        int x = i;
        for (int j = 0; j < sza(p); j++) {
            while (x % p[j] == 0) {
                c[i][j]++;
                x /= p[j];
            }
        }
    }
}

void solve() {
    int n, q;
    cin >> n >> q;

    vector<vi> pref(n + 1, vi(sza(p), 0));

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < sza(p); j++) {
            pref[i][j] = pref[i - 1][j] + c[x][j];
        }
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int ans = 0;
        for (int j = 0; j < sza(p); j++) {
            int cur = pref[r][j] - pref[l - 1][j];
            if (cur > 0) {
                ans = __gcd(ans, cur);
                if (ans == 1) break;
            }
        }

        cout << ans << "\n";
    }
}

int main() {
    makemycodefaster

    init();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}