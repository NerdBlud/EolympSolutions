#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,q;
    cin >> n >> q;

    int a[n];

    for(int i = 1; i <= n; i++) { 
        cin >> a[i];
    }

    sort(a+1, a+n+1);

    while(q--) {
        int k;
        cin >> k;
        cout << a[k] << "\n";
    }
}
