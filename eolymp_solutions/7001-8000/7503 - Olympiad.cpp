#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define ar array

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
   fastio 
    long long n, m;
    cin >> n >> m;

    long long sum = 0;
    long long t = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        sum += a;
        if (a > t) {
            t = a;
        }
    }
    long long r = (sum + m - 1) / m;
    cout << max(t, r) << endl;

    return 0;
}
