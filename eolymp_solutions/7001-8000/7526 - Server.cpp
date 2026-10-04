#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,t,a,b = 0,c = 0;
    cin >> n >> t;

    while(n--) {
        cin >> a;
        b = b + a;
        if(t >= b) {
            c++;
            continue;
        } else { 
            cout << c;
            break;
        }
    }
    
    if (n < 0) {
        cout << c << "\n";
    }
}