#include <bits/stdc++.h>
using namespace std;

int binarySearch(long long n) {
     long long L = 0, R = 21, ans = 0;

     while(L <= R) {
        long long mid = L + (R - L) / 2;

        long long pow = 1;
        for(int i = 0; i < mid; i++) {
            pow *= 2;
        }

        if(pow >= n) {
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

    int n;
    cin >> n;

    cout << binarySearch(n) + 1;
}
