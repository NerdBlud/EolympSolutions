#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, cnt=0;
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++) {
        cin >> arr[i];

        if(arr[i] > 0) {
            cnt++;
        }
    } 
    
    cout << cnt;
   
}
