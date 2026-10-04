#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int e[105] = {};

    for(int i = a; i < b; i++) {
        e[i] = 1;
    }

    for(int i = c; i < d; i++) {
        e[i] = 1;
    }

    int ans = 0;
    for(int i =0 ; i <= 100; i++) {
        if(e[i] == 1) {
            ans++;
        }
    }

    cout << ans;
}
