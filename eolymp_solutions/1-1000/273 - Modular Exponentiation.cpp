#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, n, m;
    cin >> x >> n >> m;
    long long ans = 1;
        
    for (int i = 0; i < n; i++) {
        ans = (ans * x) % m;
    }
        
    cout << ans << "\n";
}