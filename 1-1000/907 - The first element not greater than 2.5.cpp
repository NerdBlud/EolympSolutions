#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    float arr[n];

    bool found = false;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] <= 2.5) {
            cout << i + 1 << " " << fixed << setprecision(2) << arr[i];
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Not Found";
    }
}