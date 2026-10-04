#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(3));

    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << "\n";
    }

    return 0;
}