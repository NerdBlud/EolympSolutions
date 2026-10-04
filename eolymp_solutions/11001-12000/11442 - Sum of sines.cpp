#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double x;
    cin >> n >> x;
    
    double sum = 0.0;
    double s = sin(x);
    double curr = s;

    for (int i = 1; i <= n; ++i) {
        sum += curr;
        curr *= s;
    }

    cout << fixed << setprecision(6) << sum << "\n";

    return 0;
}