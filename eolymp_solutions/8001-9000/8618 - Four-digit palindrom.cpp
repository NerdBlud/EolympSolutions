#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;
    string n_rev = n;
    reverse(n_rev.begin(), n_rev.end());
    if (n == n_rev) {
        cout << "YES";
    } else { 
        cout << "NO";
    }

}
