#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n][n];
    long long sum = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) { 
            cin >> a[i][j];
            if(a[i][j] > 0) {
                sum += a[i][j];
            }
        }
    }

   cout << sum;
}
