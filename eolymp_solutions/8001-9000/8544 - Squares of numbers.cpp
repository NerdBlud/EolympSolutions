#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    for(long long i = 1; i*i <= n; i++) {
        cout << i*i << " ";
    }
}
