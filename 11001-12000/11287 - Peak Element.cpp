#include <bits/stdc++.h>
using namespace std;

int binarysearch(int n, const vector<int>& a) {
    int L = 0;
    int R = n - 1;

    while (L < R) {
        int mid = L + (R - L) / 2;

        if (a[mid] < a[mid + 1]) {
            L = mid + 1;
        } else {
            R = mid;
        }
    }

    return L;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << binarysearch(n, a) << "\n";

    return 0;
}