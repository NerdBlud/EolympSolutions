#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int cnt = 0;
    while(n--) {
        string x;
        cin >> x;
        
        for(int i = 0; i < x.length(); i++) { 
            if(x[i] == 'C' && x[i+1] == 'D') { 
                break;
            } 
            else if(i == x.length() - 1) { 
                cnt++;
            }
        }
    }

    cout << cnt;
}