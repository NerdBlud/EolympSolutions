#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long a, b;
    cin >> a >> b;

    if (a % 2 != 0) {
        a++;
    }
    if (b % 2 != 0) {
        b--;
    }

    if (a > b) {
        cout << 0;
    } else {
        cout << (b - a) / 2 + 1;
    }

    return 0;
}