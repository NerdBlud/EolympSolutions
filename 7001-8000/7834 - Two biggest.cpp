#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr+n);

    long long sum = arr[n-1] + arr[n-2];
    cout << sum;
}
