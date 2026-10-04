#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long m;
    cin >> m;

    cout << m / (24 * 60) + 1 << " " << (m % (24*60)) / 60 << " " << m % 60;
}