#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long h,w,l,k;
    cin >> h >> w >> l >> k;

    long long sum = h * w * l;
    if (sum % k != 0) {
        cout << sum / k + 1;
    } else {
        cout << sum / k;
    }
}
