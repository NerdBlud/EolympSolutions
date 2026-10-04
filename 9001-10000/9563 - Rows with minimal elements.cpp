#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    
    int a[n + 1][m + 1];
    int min_val = 200;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) { 
            cin >> a[i][j];
            if(a[i][j] < min_val) {
                min_val = a[i][j];
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i][j] == min_val) {
                cout << i << " ";
                break;
            }
        }
    }
}