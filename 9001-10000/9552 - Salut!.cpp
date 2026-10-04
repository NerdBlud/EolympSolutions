#include <bits/stdc++.h>
using namespace std;

long long binarySearch(long long n) {
    long long L = 1;
    long long R = LLONG_MAX;
    long long ans = 0;

    while(L <= R) {
        long long mid = L + (R-L) / 2;

        if(mid - (mid/3) - (mid/5) + (mid/15) >= n) {
            ans = mid;
            R = mid - 1;
        } else {
            L = mid + 1;
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
     cout << binarySearch(n) << "\n";
}
