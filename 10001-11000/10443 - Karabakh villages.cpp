#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while(q--) {
        int x;
        cin >> x;
        cout << upper_bound(a.begin(), a.end(), x) - lower_bound(a.begin(), a.end(), x) << "\n";
    }
}
