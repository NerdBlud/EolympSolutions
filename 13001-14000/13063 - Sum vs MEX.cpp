#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    cout << "YES\n";
    for (int i = 2; i <= n; i++) {
        cout << i << " ";
    }
    cout << 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
