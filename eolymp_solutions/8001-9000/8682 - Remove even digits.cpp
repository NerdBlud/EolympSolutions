#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, ans = 0, a = 1;
    cin >> n;

    while (n > 0) {
        int i = n % 10;
        if (i % 2 != 0) {
            ans += i * a;
            a *= 10;
        }
        n /= 10;
    }
    cout << ans << "\n";
}