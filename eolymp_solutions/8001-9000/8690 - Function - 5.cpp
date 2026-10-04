#include <bits/stdc++.h>
using namespace std;


long long f(long long x, long long y, long long z) { 
    return x*y*z+x+y*y+z*z*z;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long x,y,z;
    cin >> x >> y >> z;

    cout << f(x,y,z);
}
