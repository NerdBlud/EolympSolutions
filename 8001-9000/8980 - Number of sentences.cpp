#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    getline(cin, n);
    
    int cnt = 0;
    for(int i = 0; i < n.length(); i++) {
        if(n[i] == '.' || n[i] == '!' || n[i] == '?') { 
            cnt++;
        }
    }
    cout << cnt;
}