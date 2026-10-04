#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << "\n";

    cout << "*";
    for (int i = 0; i < n - 2; i++) {
        cout << " ";
    }
    cout << "*\n";

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    return 0;
}