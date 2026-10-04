#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    float cnt = 0, ans = 0;
    cin >> n;

    while(n--) {
        float t;
        cin >> t;

        if(t > 0) {
            cnt++;
            ans = t + ans;
        } else {
            continue;
        }
    }

    if(cnt != 0) {
        cout << fixed << setprecision(2) << ans / cnt;
    } else  {
        cout << "Not Found";
    }
}
