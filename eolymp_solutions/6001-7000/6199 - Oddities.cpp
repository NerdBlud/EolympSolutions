#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;

    while(n--) {
        cin >> x;

        if(x % 2 != 0) {
            cout << x << " is odd\n";
        } else {
            cout << x << " is even\n";
        }
    }

}
