#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    ll odd = 0, even = 0;

    for (int i = 0; i < n.length(); i++) {
        int a = n[i] - '0';
        
        if ((i + 1) % 2 != 0) {
            odd += a;
        } else {
            even += a;
        }
    }

    cout << odd * even << "\n";

}