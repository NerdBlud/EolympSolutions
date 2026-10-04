#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x,y;
    cin >> x >> y;
    if(x < -4) y = x + 5;
    else if(x >= -4 && x <= 7) y = x*x-3*x;
    else if(x > 7) y = x*x*x + 2*x;
    cout << y;
}
