#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long ans = 0;
    cin >> n;
    
    for(long long i = 1; i <= n; i++) {
        ans += i * i * i;  
    }
    
    cout << ans << "\n";
} 