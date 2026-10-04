#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int points = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool is_saddle = true;
            
            for (int k = 0; k < m; k++) {
                if (a[i][k] < a[i][j]) {
                    is_saddle = false;
                    break;
                }
            }
            
            for (int k = 0; k < n; k++) {
                if (a[k][j] > a[i][j]) {
                    is_saddle = false;
                    break;
                }
            }
            
            if (is_saddle) {
                points++;
            }
        }
    }

    cout << points;
}