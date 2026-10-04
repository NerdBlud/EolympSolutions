#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){ 
        cin >> arr[i];
    }
    
    int cnt = 0;
    for(int i = 1; i < n - 1; i++) {
        if(arr[i-1] % 2 == 0 && arr[i+1] % 2 == 0) {
            cnt++;
        }
    }

    cout << cnt;
}
