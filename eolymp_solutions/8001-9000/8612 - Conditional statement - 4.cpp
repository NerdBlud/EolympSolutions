#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long y,x;
    cin >> x;
    if(x > -1) y = x*x*x + 2*x*x + 4*x - 6;
    else if(x < 0) y = x*x*x - 7*x;
    cout << y;
}
