#include <bits/stdc++.h>
using namespace std;

int f(long long n) {
    int cnt = 1;
    while (n != 1) {
        if (n % 2 != 0) n = 3 * n + 1;
        else n /= 2;
        cnt++;
    }
    return cnt;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        int ans = 0;
        for (int i = min(a, b); i <= max(a, b); i++) {
            ans = max(ans, f(i));
        }
        cout << a << " " << b << " " << ans << "\n";
    }
    return 0;
}