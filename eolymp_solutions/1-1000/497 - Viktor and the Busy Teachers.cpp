#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int aa = 1;
        int bb = 31;
        
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            
            aa = max(aa, a);
            bb = min(bb, b);
        }
        
        if (aa <= bb) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

}
