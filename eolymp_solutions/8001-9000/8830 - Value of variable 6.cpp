#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    float x;
    cin >> x;

    cout << fixed << setprecision(3) << (sqrt(x*x*x*x+1) / (x*x)) - sqrt((x*x)/(x*x+1));

}
