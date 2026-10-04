#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,d;
    cin >> a >> b >> c;

    if(a == b && b == c && a == c) d = 1;
    else if(a != b && b != c && a != c) d = 3;
    else d = 2;

    cout << d;
}
