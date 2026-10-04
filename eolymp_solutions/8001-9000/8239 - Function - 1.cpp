#include <bits/stdc++.h>
using namespace std;

double f(double x) { 
    return x*x*x + 2 * x*x - 3;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed << setprecision(4);

    double x;
    while(cin >> x) {
        cout << f(x) << "\n";
    }

}