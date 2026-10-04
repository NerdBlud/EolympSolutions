#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << arr[n - 1] << " ";

    for(int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
}