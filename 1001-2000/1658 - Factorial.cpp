#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, f = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) f *= i;
    cout << f;
}
