#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < m; j++) { 
            cin >> arr[i][j];
        }
    }

    long long sum = 0;

    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < m; j++) { 
            int m;
            cin >> m;

            if(m == 1) {
                sum += arr[i][j];
            }
        }
    }

    cout << sum;
}