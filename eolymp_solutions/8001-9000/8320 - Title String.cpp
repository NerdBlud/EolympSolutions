#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.length(); i++) {
        if (i == 0 || s[i - 1] == ' ') {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
}
