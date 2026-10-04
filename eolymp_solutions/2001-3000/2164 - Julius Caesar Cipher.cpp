#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;
    
    int a;
    cin >> a;
    
    for(int i = 0; i < n.length(); i++) { 
        char c = n[i] - a;
        if (c < 'A') {
            c += 26;
        }
        cout << c;
    }
}