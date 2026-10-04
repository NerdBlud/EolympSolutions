#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,a,b;
    cin >> n >> a >> b; 

    if(n % b == 0 && n % a == 0) cout << "YES";
    else cout << "NO";
}
