#include <iostream>

using namespace std;

int main() {
    int n, a[105];
    cin >> n;
    
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int mid = (n + 1) / 2;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) 
            cout << a[i / 2] << " ";
        else 
            cout << a[mid + i / 2] << " ";
    }
    
}