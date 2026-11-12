#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long a, b;
    cin >> a >> b;

    vector<long long> pow;
    long long poww = 2;
    
    for (int i = 1; i <= 60; i++) {
        pow.push_back(poww);
        poww *= 2;
    }

    auto L = lower_bound(pow.begin(), pow.end(), a);
    auto R = upper_bound(pow.begin(), pow.end(), b);

    cout << R - L << "\n";

    return 0;
}