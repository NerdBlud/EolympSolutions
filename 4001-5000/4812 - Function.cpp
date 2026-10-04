#include <bits/stdc++.h>
using namespace std;

double f(double x) { 
   return sin(x) + sqrt(log(3 * x) / log(4)) + ceil(3 * exp(x)); // EXP NEDI AXI
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double x;
    while(cin >> x) {
        cout << fixed << setprecision(4) << f(x) << "\n";
    }

}