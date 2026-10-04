#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;

    cout << m / n;
    if (k > 0) cout << ".";

    while (k--) {
        m = (m % n) * 10;
        cout << m / n;
    }
}