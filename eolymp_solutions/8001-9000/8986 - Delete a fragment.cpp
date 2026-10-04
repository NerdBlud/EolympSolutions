#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s); 
    
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < s.length(); i++) {
        if(i < n || i > m) {
            cout << s[i];
        }
    }
}