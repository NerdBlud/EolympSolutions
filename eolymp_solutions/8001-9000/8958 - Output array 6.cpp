#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    int cnt = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i % 2 != 0) {
            cnt++;
        }
    }

    if (cnt == 0) {
        cout << "NO\n";
    } else {
        cout << cnt << "\n"; 
        
        for(int i = 0; i < n; i++) {
            if(i % 2 != 0) {
                cout << arr[i] << " "; 
            }
        }
    }
    
    return 0;
}