#include <bits/stdc++.h>
using namespace std;

bool isPal(const string &s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}

bool isSame(const string &s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[0]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    if (!(cin >> s)) return 0;

    int n = s.size();

    if (isSame(s)) cout << -1 << "\n";
    else if (!isPal(s)) cout << n << "\n";
    else cout << n - 1 << "\n";

    return 0;
}