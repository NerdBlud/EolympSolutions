#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,n;
    cin >> a >> b >> n;

    int ans = INT_MAX;

    for(int i = 0; i < n; i++) {
    int cost, m;
    cin >> cost >> m;
    
    bool found = false;
    for(int j = 0; j < m; j++) {
     int x;
     cin >> x;
     if(x == a) {
        found = true;
     }

     if(x == b && found == true) { 
        if(cost < ans) {
            ans = cost;
        }
     }
    }
}

if(ans == INT_MAX) {
    cout << -1 << "\n";
} else {
    cout << ans << "\n";
}
}
