#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.length() % 2 != 0) {
        cout << "no";
        return 0;
    }

    int yari = s.length() / 2;
    
    for(int i = 0; i < yari; i++) {
        if(s[i] != s[i + yari]) {
            cout << "no";
            return 0;
        }
    }

    cout << "yes";
}