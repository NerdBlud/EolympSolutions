#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b;
    cin >> a >> b;

    string ans = a+b;
    sort(ans.begin(), ans.end());

    for(int i = 0; i < a.length(); i++) {
        cout << ans[i];
    }
    
}
