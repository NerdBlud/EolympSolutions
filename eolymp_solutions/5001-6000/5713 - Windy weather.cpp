#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    int a = 0; int b = 101; int c;       
    
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c > a) {
            a = c;
        }
        if (c < b) {
            b = c;
        }
    }
    
    cout << a - b << "\n";
    
}