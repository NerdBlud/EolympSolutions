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

    long long maximumun_mininumunu = LLONG_MAX;

    for(int i = 0; i < n; i++) {
        int row_max = a[i][0];
        
        for(int j = 1; j < m; j++) {
            if(a[i][j] > row_max) {
                row_max = a[i][j];
            }
        }
        
        if(row_max < maximumun_mininumunu) {
            maximumun_mininumunu = row_max;
        }
    }

    cout << maximumun_mininumunu << "\n";
}