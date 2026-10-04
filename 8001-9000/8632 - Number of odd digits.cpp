#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n,cnt;
    cin >> n;
    string a = to_string(n);
    for(int i = 0; i < a.size(); i++){ 
        if((a[i] - '0') % 2 != 0) { 
          cnt++;
        } else { 
            continue;
        }
    }
    cout << cnt;
}
