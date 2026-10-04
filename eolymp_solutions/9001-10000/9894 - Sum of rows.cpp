#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) { 
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        long long sum = 0;
        
        for(int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        
        cout << sum << "\n";
    }
}