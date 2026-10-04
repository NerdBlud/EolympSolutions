#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0;
    int i = 0, j = s.length() - 1;

    while (i <= j) {
        if (s[i] == s[j]) {
            ans++;
        }
        i++;
        j--;
    }

    cout << ans << "\n";
    return 0;
}