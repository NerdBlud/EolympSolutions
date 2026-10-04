#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string n;
    getline(cin,n);
    
    bool found_a = false;
    for(int i = 0; i < n.length(); i++){ 
        if(n[i] == 'a') { 
           cout << 'a';
           found_a = true;
        } 
    }
    if(found_a == false) { 
        cout << -1;
    }
}
