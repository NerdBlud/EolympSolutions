#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int start = 1;
    int mid = ceil(pow(n, 2) / 2) + 1; 

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            
            if((i + j) % 2 == 0) {
                if (start < 10) cout << " " << start << " ";
                else cout << start << " ";
                
                start++;
            } 
            else {
                if (mid < 10) cout << " " << mid << " ";
                else cout << mid << " ";
                
                mid++;
            }
            
        }
        cout << endl;
    }
}