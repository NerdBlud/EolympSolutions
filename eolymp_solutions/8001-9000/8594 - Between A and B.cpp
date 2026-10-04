#include <bits/stdc++.h>
using namespace std;

long long f(long long a, long long b, long long x) {
    if (a == 0) {
        return b / x + 1;
    }
    return (b / x) - ((a - 1) / x);
}

int main() {
    long long a, b, x;
    if (cin >> a >> b >> x) {
        cout << f(a, b, x) << "\n";
    }
}