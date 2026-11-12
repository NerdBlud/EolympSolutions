#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, start = 1, ans = 0;
    cin >> n >> m;
    
    for (int i = 1; i < n; i++) {
        start *= 10;
    }
    
    ans = max(ans, min(m, start * 10) - start);
    
    cout << ans << "\n";
}