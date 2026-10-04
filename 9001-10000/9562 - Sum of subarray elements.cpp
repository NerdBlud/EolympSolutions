#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    
    int a[n + 1][m + 1];

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) { 
            cin >> a[i][j];
        }
    }

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    int sum = 0;
    for(int i = r1; i <= r2; i++) {
        for(int j = c1; j <= c2; j++) {
            sum += a[i][j];
        }
    }

    cout << sum << "\n";
}