#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;

    long long ans = 0;

    for(int i = 0; i < n.size(); i++) {
        int a = n[i] - '0';
        if(a % 2 != 0) {
           ans = ans * 10 + (a - 1);
        } else { 
            ans = ans * 10 + (a + 1);
        }
    }
cout << ans;
}

