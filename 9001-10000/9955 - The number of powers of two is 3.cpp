#include <bits/stdc++.h>
using namespace std;

long long salam(long long aa) {
    long long res = 1;
    for (long long i = 0; i < aa; i++) {
        res *= 2;
    }
    return res;
}

long long binarysearch(long long m) {
    long long L = 0;
    long long R = 60;
    long long ans = -1;

    while (L <= R) {
        long long mid = L + (R - L) / 2;
        long long curr = salam(mid);

        if (curr <= m) {
            ans = mid;
            L = mid + 1;
        } else {
            R = mid - 1;
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

    long long minn = 1;
    for (int i = 1; i < n; i++) {
        minn *= 10;
    }

    long long maxx = minn * 10 - 1;

    long long R = binarysearch(maxx);
    long long L = binarysearch(minn - 1);

    cout << R - L << "\n";

    return 0;
}