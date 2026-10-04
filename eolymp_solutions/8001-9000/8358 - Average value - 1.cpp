#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int arr[1000000];
    int n = 0;

    while(cin >> arr[n]) {
        n++;
    }
      
    int minimum = INT_MAX;
    int maximum = INT_MIN; 
    
    for(int i = 0; i < n; i++) { 
       if(arr[i] < minimum) minimum = arr[i];
       if(arr[i] > maximum) maximum = arr[i];
    }

    double sum = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == minimum || arr[i] == maximum) {
            continue;        
        } else {
            sum += arr[i];
            cnt++;
        }
    }

    cout << round(sum / cnt) << "\n";
}