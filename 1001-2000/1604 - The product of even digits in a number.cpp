#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    string a = to_string(abs(n));

    long long ans = 1;

    for(int i = 0; i < a.size(); i++) { 
        int alirza = a[i] - '0';

        if(alirza % 2 == 0) { 
            ans *= alirza;
        }
    }

    if(ans != 1) {
        cout << ans << "\n";
    } else {
        cout << -1 << "\n";
    }
    
}
