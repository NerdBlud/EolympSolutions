#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, a, b;
    cin >> n >> a >> b;

    long long basla = 1;
    for (int i = 1; i < n; i++) {
        basla *= 10;
    }
    long long son = basla * 10 - 1;

    basla = max(basla, a);
    son = min(son, b);

    if (basla > son) {
        cout << 0;
    } else {
        cout << son - basla + 1;;
    }
}