#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    getline(cin, n);

    for(int i = 0; i < n.length(); i++) {
        if(islower(n[i])) {
            cout << (char)toupper(n[i]); 
        } else if(isupper(n[i])) {
            cout << (char)tolower(n[i]);
        } else {
            cout << n[i]; 
        }
    }
}