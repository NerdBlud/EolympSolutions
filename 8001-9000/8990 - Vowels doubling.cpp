#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    getline(cin,n);

    for(int i = 0; i<n.length(); i++) {
        if(n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u' || n[i] == 'y') {
            cout << n[i] << n[i];
        } else {
            cout << n[i];
        }
    }
}
