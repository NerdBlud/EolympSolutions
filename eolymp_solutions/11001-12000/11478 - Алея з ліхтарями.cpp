#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    int salamsifir = 0, salambir = 0, sagsifir = 0, sagbir = 0;
    
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;

        if (l == 0) salamsifir++;
        else salambir++;
        
        if (r == 0) sagsifir++;
        else sagbir++;
    }
    
    cout << min(salamsifir, salambir) + min(sagsifir, sagbir) << "\n";
 }