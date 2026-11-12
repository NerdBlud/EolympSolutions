#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int bal = 0;
    for (char c : s) {
        if (c == '(') {
            bal++;
        } else if (c == ')') {
            bal--;
            if (bal < 0) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    if (bal == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}