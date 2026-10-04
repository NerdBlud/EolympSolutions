#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    float x,y;
    cin >> x >> y;

    cout << fixed << setprecision(3) << 2*x*x - 4*x*y + 3*y*y + (x+y)/7;
}
