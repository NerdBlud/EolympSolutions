#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long root = floor(sqrt((long double)n));
    long long result = 2 * n + root + (long long)ceil((long double)n / root);
    cout << result << endl;
    return 0;
}
