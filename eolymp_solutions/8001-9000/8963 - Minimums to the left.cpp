#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] < m) {
            m = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] == m) {
            cout << arr[i] << " ";
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] != m) {
            cout << arr[i] << " ";
        }
    }
}