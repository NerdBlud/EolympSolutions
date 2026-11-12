#include <bits/stdc++.h>
using namespace std;

long long binarySearch(long long n) {
    long long l = 0;
    long long r = 40;
    long long ans = 1;

    while(l <= r) {
        long long mid = l + (r - l) / 2;

        long long pow = 1;
        for(int i = 0; i < mid; i++) {
            pow *= 2;
        }

        if(pow < n) {
            ans = pow;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    cout << binarySearch(n);
}
