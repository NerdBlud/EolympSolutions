#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string a = to_string(n);
    int ans = 0;
    for(int i; i < a.size(); i++ ) { 
      if(a[i] == '5') { 
        ans++;
      } else { 
        continue;
      }
    }
    cout << ans;
}
