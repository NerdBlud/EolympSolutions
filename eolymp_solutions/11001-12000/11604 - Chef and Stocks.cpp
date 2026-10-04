#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arr[n];

        ll sum = 0;
        for(int i = 0; i<n; i++) { 
            cin >> arr[i];
            sum += arr[i];
        }
        
        ll profit = LLONG_MIN;
        for(int i = 0; i<n; i++) {
            if(sum - arr[i] > profit) {
                profit = sum - arr[i];
            }
        }

        cout << profit << endl;
    }
}