#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((arr[i] + arr[j]) % k == 0) {
                ans++;
            }
        }
    }

    cout << ans;
}