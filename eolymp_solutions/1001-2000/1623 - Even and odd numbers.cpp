#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c;
    cin >> a >> b >> c;
     
    if(((a % 2 == 0) || (b % 2 == 0) || (c % 2 == 0)) && ((a % 2 != 0) || (b % 2 != 0) || (c % 2 != 0))) cout << "YES";
    else cout << "NO";
}
