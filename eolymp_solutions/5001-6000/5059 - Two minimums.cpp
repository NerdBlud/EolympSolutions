#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    long long arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];    
    }

    long long a = LLONG_MAX, b = LLONG_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] < a) a = arr[i];
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] == a) {
            continue;
        } else {
            if(arr[i] < b) b = arr[i];
        }
    }

    cout << min(a,b) << " " << max(a,b);
}
