#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    while (cin >> n && n != 0) {
        if (n > 0) {
            cout << n * (n + 1) / 2 << "\n";
        } else {
            long long cnt = 1 - n + 1;
            cout << cnt * (1 + n) / 2 << "\n";
        }
    }

    return 0;
}