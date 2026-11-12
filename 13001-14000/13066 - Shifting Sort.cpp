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

int main() {
    makemycodefaster

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<pii> dp = {{0, 0}};

        for (int x : a) {
            int p = 1, len = 0;
            while (p <= x) {
                p *= 2;
                len++;
            }
            vector<pii> b;

            for (int s = 0; s < len; s++) {
                int res = INT_MAX;
                for (auto it : dp) {
                    if (it.first <= x) {
                        res = min(res, it.second);
                    }
                }
                if (res < INT_MAX) {
                    b.pb({x, res + s});
                }
                x *= 2;
                if (x >= p) {
                    x = x - p + 1;
                }
            }

            dp = b;
            if (dp.empty()) {
                break;
            }
        }

        int ans = INT_MAX;
        for (auto it : dp) {
            ans = min(ans, it.second);
        }

        if (ans >= INT_MAX) {
            cout << -1 << "\n";
        } else {
            cout << ans << "\n";
        }
    }

    return 0;
}