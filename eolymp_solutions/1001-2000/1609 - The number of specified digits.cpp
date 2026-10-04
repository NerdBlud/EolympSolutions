#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;
    int b;
    cin >> b;
    int ans = 0;

    for(int i; i < n.size(); i++) {
        if(n[i] == b + '0'){
            ans++;
        } else {
            continue;
        }
    }

    cout << ans;
}
