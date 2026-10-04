#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    getline(cin, n);

    int cnt = 0,ans = 0; 

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == 'k') {
            cnt++; 
            ans = max(ans, cnt); 
        }
        else if (n[i] == 'p') { 
            cnt = 0; 
        }
}
    cout << ans << "\n";
}