#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long x,y;
    cin >> x >> y;
    if(x >= 10) y = x*x*x + 5*x ;
    else if(x < 10) y = x*x - 2*x + 4;
    cout << y;
}
