#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string c;
    int cnt = 0;
    
    while(getline(cin, c)) {
      for(int i = 0; i < c.size(); i++) {
        if(isdigit(c[i])) {
            cnt++;
        }
      }
    }
    
    cout << cnt << "\n";
}