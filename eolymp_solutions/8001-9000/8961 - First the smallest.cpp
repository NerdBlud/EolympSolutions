#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < arr[m]) {
            m = i;
        }
    }

    swap(arr[0], arr[m]);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}