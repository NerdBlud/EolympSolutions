#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool first = true;
    
    for (int i = 0; i < n; i++) {
        bool simple = true;
        
        for (int j = 0; j < n; j++) {
            if (i != j && a[i] % a[j] == 0) {
                simple = false;
                break; 
            }
        }
        
        if (simple) {
            if (!first) cout << " ";
            cout << a[i];
            first = false;
        }
    }
    cout << "\n";
}