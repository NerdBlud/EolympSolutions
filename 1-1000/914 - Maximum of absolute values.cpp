#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    double ans = 0.0;

    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        ans = max(ans, abs(x));
    }

    cout << fixed << setprecision(2) << ans;
}