#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    long long qapi = x*y;
    if (((a <= x) && (b <= y)) || ((b <= x) && (a <= y)) ||
        ((b <= x) && (c <= y)) || ((c <= x) && (b <= y)) ||
        ((a <= x) && (c <= y)) || ((c <= x) && (a <= y))) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
