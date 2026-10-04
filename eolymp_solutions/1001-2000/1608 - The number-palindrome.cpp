#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;

    
    for(int i = 0; i < n.length() / 2; i++) { 
        if(n[i] != n[n.length() - 1 - i]) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
}