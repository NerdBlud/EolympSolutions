#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    int arr[n];
    for(int i = 1; i <= n; i++) {
        arr[i] = i;
    }

    reverse(arr + a, arr + b + 1);
    reverse(arr + c, arr + d + 1);

    for(int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
}