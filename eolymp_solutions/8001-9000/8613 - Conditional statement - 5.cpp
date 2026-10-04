#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long x,y;
    cin >> x >> y;

    if(x > 12) y = 3*x*x*x + 4*x*x + 5*x + 6; 
    else if(x < 13) y = 3*x*x*x - 2*x*x - 3*x - 4;
    cout << y;
}
