#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) { 
        int n, sum = 0;
        cin >> n;
        int arr[n];
        
        for(int i = 0; i < n; i++) {
           cin >> arr[i];
           sum += arr[i];
        }

        int idx = 0, cnt = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] > arr[idx]) {
                idx = i;
            }
        }

        for(int i = 0; i < n; i++) {
            if(arr[i] == arr[idx]) {
                cnt++;
            }
        }

        if(cnt > 1) {
            cout << "no winner\n";
        } else if(arr[idx] > sum / 2) {
            cout << "majority winner " << idx + 1 << "\n";
        } else {
            cout << "minority winner " << idx + 1 << "\n";
        }
    }
}