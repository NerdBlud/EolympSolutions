#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    
    float sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    float elirza_nerdblud = sum / n;
    
    int ans = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(elirza_nerdblud < arr[i]){
           ans += arr[i];
           cnt++;
        }
    }
    
    cout << ans << " " << cnt;
}
