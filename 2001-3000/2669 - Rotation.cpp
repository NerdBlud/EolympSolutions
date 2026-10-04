#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    
    int a[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) { 
            cin >> a[i][j];
        }
    }

    cout << m << " " << n << "\n";

    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            cout << a[n - 1 - i][j] << " ";
        }
        cout << "\n";
    }
}