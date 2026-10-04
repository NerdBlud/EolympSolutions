#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++) {
        if (i == 0) {
            if (n[i] != '0') {
                cout << 1;
            } else {
                cout << 0;
            }
        } else {
            if (n[i] != n[i - 1]) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
    }
}