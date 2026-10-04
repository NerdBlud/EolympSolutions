#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string ans;
    
    for (int i = 1; i <= 10000; i++) {
        ans += to_string(i); 
            if (ans.length() >= n) {
            break;
        }
    }
    
    cout << ans[n - 1] << endl;
}