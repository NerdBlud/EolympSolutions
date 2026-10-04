#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, ans;
    cin >> n;

    for(int i = 1; i <= 7; i++) {
        ans = n + i;
        if(ans % 7 == 0) {
            cout << ans;
            break; 
        } else if (ans == 0) {
            cout << "0";
        } else {
            continue;
        }

    }
}