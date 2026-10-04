#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int k, ans = 0;
    cin >> k;
    string word;
    
    while (cin >> word) {
        int cnt = 0;
        for (char c : word) {
            if (isupper(c)) {
                cnt++;
            }
        }
        if (cnt >= k) {
            ans++;
        }
    }
    
    cout << ans << "\n";
}