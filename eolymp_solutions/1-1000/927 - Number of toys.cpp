#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, ans = 0;
    cin >> a;

    while(a--) {
        int b;
        float t;
        cin >> b >> t;
        
        if(t < 50) {
            ans = ans + b;
        } else {
            continue;
        }
    }

    cout << ans;
}
