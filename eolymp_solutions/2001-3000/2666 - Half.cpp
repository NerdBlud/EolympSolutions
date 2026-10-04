#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int arr[n][n];
    

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            if(i+j == n-1) { 
                cout << "0";
            } else if(i+j > n-1) {
                cout << "1";
            } else if(i+j < n-1) { 
                cout << "2";
            }
            
        }
        cout<<"\n";
    }
}
