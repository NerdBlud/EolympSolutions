#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int ans = 10000; 
    
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        
        int cnt = b / a;
        
        ans = min(ans, cnt);
    }
    
    cout << ans;
}