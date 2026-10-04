#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    int elsie[100002] = {0};

    for(int i = 0; i < n; i++) { 
        int c;
        cin >> c;
        elsie[c] = 1;
    }

    int ans = 0, cnt = 0;

    for(int i = 1; i <= 2 * n; i++ ) {
        if(elsie[i] == 1) { 
            cnt++; 
        } else { 
            if(cnt > 0) { 
                ans++;
                cnt--;
            }
        }
    }
    cout << ans;
}
