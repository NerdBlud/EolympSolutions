#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    getline(cin, n);
    
    if(n.find(' ') == string::npos) { 
        cout << "-1";
        return 0;
    } else { 
        cout << n.find(' ') << " " << n.rfind(' ');
    }
}
