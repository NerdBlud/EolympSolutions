#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, cnt = 0;
    cin >> n;

    float ans = 0;

    while(n--) {
        float t;
        cin >> t;

        if(t > 0) {
            continue;
        } else if (t < 0) {
            cnt++;
            ans = ans + t;
        }
    }

    cout << fixed << setprecision(2) << cnt << " " << ans;
}
