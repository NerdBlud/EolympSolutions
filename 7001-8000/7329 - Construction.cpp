#include <bits/stdc++.h>
using namespace std;

long long binarysearch(int n, long long m, vector<long long>& l, long long maxx) {
    long long L = 1;
    long long R = maxx;
    long long ans = 0;

    while (L <= R) {
        long long mid = L + (R - L) / 2;

        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += l[i] / mid;
        }

        if (cnt >= m) {
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

    long long n, m;
    cin >> n >> m;

    vector<long long> l(n);
    long long maxx = 0;

    for (int i = 0; i < n; i++) {
        cin >> l[i];
        if (l[i] > maxx) {
            maxx = l[i];
        }
    }

    cout << binarysearch(n, m, l, maxx) << "\n";

}