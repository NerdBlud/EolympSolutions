#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;
    
    for(int i = n; i <= m; i++) {
        if(i % 2 != 0) { 
            cout << i << " ";
        } else {
            continue;
        }
    }
}

