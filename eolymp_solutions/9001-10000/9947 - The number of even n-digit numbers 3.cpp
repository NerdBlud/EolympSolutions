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

    if (basla % 2 != 0) basla++;
    if (son % 2 != 0) son--;

    if (basla > son) {
        cout << 0;
    } else {
        long long cnt = (son - basla) / 2 + 1;
        cout << cnt;
    }
}