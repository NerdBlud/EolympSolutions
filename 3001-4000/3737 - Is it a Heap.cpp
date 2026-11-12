#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    bool heap = true;
    for (int i = 1; i <= n / 2; ++i) {
        if (2 * i <= n && a[i] > a[2 * i]) {
            heap = false;
            break;
        }
        if (2 * i + 1 <= n && a[i] > a[2 * i + 1]) {
            heap = false;
            break;
        }
    }

    if (heap) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
