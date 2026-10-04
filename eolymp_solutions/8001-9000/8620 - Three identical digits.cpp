#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int n1 = n/1000;
    int n2 = (n/100) % 10;
    int n3 = (n/10) % 10;
    int n4 = n % 10;

    if((n1 == n2 && n2 == n3 && n3 != n4) || (n1 == n2 && n2 == n4 && n4 != n3) || (n1 == n3 && n3 == n4 && n4 != n2) || (n2 == n3 && n3 == n4 && n4 != n1)) cout << "YES";
    else cout << "NO";
    
}
