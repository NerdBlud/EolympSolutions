#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    float x;
    cin >> x;
    cout << fixed << setprecision(3) << ((x*x + 3*x - 4)/(2*x-3)) - ((x+2)/(x*x-5*x+7));
}
