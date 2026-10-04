#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x,y;
    cin >> x >> y;
    if(x < 5) y = x*x - 3*x + 4;
    else if(x >= 5) y = x + 7;
    cout << y;
}
