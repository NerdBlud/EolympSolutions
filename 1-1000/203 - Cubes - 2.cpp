#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        int l = i, r = n - 1, ok = 1;
        while (l < r) {
            if (v[l++] != v[r--]) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            cout << i << "\n";
            return 0;
        }
    }
    return 0;
}