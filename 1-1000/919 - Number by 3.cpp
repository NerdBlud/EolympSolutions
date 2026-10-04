#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    double arr[n];

    for(int i = 0; i < n; i++) { 
        cin >> arr[i];
    }

    int cnt = 0;
    double sum = 0;

    for(int i = 0; i < n; i++) {
        if((i + 1) % 3 == 0 && arr[i] > 0) {
            sum += arr[i];
            cnt++;
        }
    }

    cout << cnt << " " << fixed << setprecision(2) << sum << "\n";
}