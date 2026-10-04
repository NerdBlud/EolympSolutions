#include <bits/stdc++.h>
using namespace std;

long long a[100005];
long long pref[100005];

void solve() { 
    int n, q;
    cin >> n >> q;

    for(int i = 1; i <= n; i++) { 
        cin >> a[i]; 
        pref[i] = pref[i - 1] + a[i]; 
    }

    while (q--) { 
        int l, r;
        cin >> l >> r;
        l++;
        r++;

        cout << pref[r] - pref[l - 1] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << "\n";
    }
    return 0;
}