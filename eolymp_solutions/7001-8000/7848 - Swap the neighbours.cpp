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

    for(int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}