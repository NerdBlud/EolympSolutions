#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

int n;
    cin >> n;
    
    int ans = 1000; 
    
    for (int i = 0; i < n; ++i) {
        int t, l;
        cin >> t >> l;
        
        int arr = t + l;
        
        ans = min(ans, arr);
    }
    
    cout << ans << "\n";
    
}
