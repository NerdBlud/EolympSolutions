#include <bits/stdc++.h>
using namespace std;

void alirzasort(int arr[], int n) {
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) { 
            if(arr[j] > arr[j+1]) { 
                swap(arr[j], arr[j+1]);
                cnt++;
            }
        }
    }
    cout << cnt;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) { 
        cin >> arr[i];
    }

    alirzasort(arr, n);
}
