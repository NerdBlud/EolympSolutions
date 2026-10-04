#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,b,a;
    cin >> n;

    while(n--) {
        int x; 
        cin >> x;

        if(x == 0) {
            b++;
        } else { 
            a++;
        }
    }
    cout << min(a,b);
}
