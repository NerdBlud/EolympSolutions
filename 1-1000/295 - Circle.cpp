#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long r;
    cin >> r;

    long long cnt = 0;

    // demeli, her defe radius 1 dene artanda dairenin icinde alinan tam kublar:
    // 2*n+1 disturuynan artir. qiraqlarda ise verilen nin 4 dene artiq noqte olur
    // 

    for (long long x = -r; x <= r; ++x) {
        long long kvadrat = sqrt(r * r - x * x);
        cnt += (2 * kvadrat + 1);
    }

    cout << cnt << "\n";

}