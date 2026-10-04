#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;      
    float sum = (float)n / (n + 1);
    cout << fixed << setprecision(6) << sum << "\n";
}
