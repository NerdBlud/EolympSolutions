#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    double sum = 0.0;
    double curr = 0.0;

    for (int i = 1; i <= n; ++i) {
        curr += sin(i);
        sum += 1.0 / curr;
    }

    cout << fixed << setprecision(6) << sum << "\n";
}

