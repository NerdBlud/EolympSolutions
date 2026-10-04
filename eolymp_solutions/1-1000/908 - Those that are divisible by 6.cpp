#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int ans = 0, n, sum = 0;
    cin >> n;

    while(n--) {
        int t;
        cin >> t;

        if(t % 6 == 0 && t > 0) { 
            ans++;
            sum = sum + t;
        } else { 
            continue;
        }
    }

    cout << ans << " " << sum;
}
