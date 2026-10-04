#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long p = 1;
    long long mod = 1000000007;
    char c;

    while(cin >> c) {
        if(c >= 'A' && c <= 'Z') {
            long long v = c - 'A' + 1;
            p = (p * v) % mod;
        }
    }

    cout << p << "\n";
}