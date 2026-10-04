#include <bits/stdc++.h>
using namespace std;

double f(double x, double y) { 
    return x*x + sin(x*y) - y*y;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double x,y;
    while(cin >> x >> y) {
        cout << fixed << setprecision(4) << f(x,y) << "\n";
    }

}