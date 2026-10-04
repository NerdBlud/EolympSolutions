#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long g = lcm(a,b);
        if(g == c) { 
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}
