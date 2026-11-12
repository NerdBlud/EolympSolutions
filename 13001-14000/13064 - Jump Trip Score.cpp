#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long ans = 0, b = 0, c = 0;
        while (n--) {
            long long a;
            cin >> a;
            ans += a;
            c += a;
            b = min(b, c);
            if (c > 0) {
                c = 0;
            }
        }

        cout << ans - b << "\n";
    }

    return 0;
}