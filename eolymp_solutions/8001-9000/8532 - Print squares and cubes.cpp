#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,m;
    cin >> n >> m;
    
    for(long long i = n; i <= m; i++) {
        cout << i*i << " ";
    }

    cout<<endl;

    for(long long i = m; i >= n; i--) {
        cout << i*i*i << " ";
    }

}

