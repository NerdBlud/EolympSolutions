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
    
    int a = arr[0], b = arr[0];
    for(int i = 0; i < n; i++) {
       if(arr[i] > a) a = arr[i];
       if(arr[i] < b) b = arr[i];
    }

    for(int i = 0; i < n; i++){ 
        if(arr[i] == a) {
            cout << b << " "; 
        } else {
            cout << arr[i] << " ";
        }
    }
}
