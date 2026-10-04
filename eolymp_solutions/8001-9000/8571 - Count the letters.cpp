#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    char m;
    getline(cin, n);
    cin >> m;
    
    int cnt = 0;
    for(int i = 0; i < n.length(); i++) {
        if(tolower(n[i]) == tolower(m)) { 
            cnt++;
        }
    }
    cout << cnt;
}