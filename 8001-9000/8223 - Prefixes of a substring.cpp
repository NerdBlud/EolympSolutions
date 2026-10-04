#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    getline(cin, n);
    int a, b;
    cin >> a >> b;

    int length = b - a + 1;
    
    cout << length + 1 << "\n"; 

    for(int i = 1; i < length; i++) {
        int ans = i;
        for(int i = 0; i < n.length(); i++) {
            if(i >= a - 1 && ans != 0) { 
                cout << n[i];
                ans--; 
            }
        }
        cout << "\n";
    }
}