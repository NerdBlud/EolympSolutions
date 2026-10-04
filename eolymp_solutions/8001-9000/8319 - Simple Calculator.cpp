#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m,n;
    string x;
    cin >> m >> x >> n;

    if(x == "*") {
        cout << m * n;
    } else if (x == "+") {
        cout << m + n;
    } else if (x == "-") { 
        cout << m - n;
    } else if ( x == "/") { 
        cout << m / n;
    }
}
