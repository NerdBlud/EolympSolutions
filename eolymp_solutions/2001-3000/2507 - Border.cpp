#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int w, h;
    cin >> w >> h;
    
    char a[h][w];

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w - 1; j++) {
            if(a[i][j] != a[i][j+1]) {
                ans++;
            }
        }
    }

    for(int i = 0; i < h - 1; i++) {
        for(int j = 0; j < w; j++) {
            if(a[i][j] != a[i+1][j]) {
                ans++;
            }
        }
    }

    cout << ans;
}