#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a,b,c,d;
    cin >> a >> b >> c >> d; 
    long long k = a*b*c*d;
    if(a == b && b == c && c == d) cout << a*a;
    else cout << "No";

}
