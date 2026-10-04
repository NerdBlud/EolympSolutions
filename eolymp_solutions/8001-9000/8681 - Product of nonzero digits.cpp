#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;
    int ans = 1;

    for(int i = 0; i < n.size(); i++){
        if(n[i] == '0'){
            continue;
        } else {
            ans = (n[i] - '0') * ans;
        }
    }
    cout << ans;
}