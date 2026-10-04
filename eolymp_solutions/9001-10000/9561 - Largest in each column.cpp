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

    for(int j = 0; j < m; j++) {
        int max_val = a[0][j]; 
        
        for(int i = 1; i < n; i++) {
            if(a[i][j] > max_val) {
                max_val = a[i][j];
            }
        }
        
        cout << max_val << " ";
    }
}