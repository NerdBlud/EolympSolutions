#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        long long l, w, h;
        cin >> l >> w >> h;
        long long distur = 2 * h * (l + w);
        long long ans = (distur + 15) / 16;
        cout << ans << "\n";
    }
}