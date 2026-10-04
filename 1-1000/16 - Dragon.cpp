#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long S, K, A, B;
    cin >> S >> K >> A >> B;

    for (long long y = 1; y * K < A; ++y) {
        long long x = A - y * K;
        if (x < 1) break;

        long long ans = B - x * S;
        if (ans >= 0 && ans % y == 0) {
            cout << ans / y << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}