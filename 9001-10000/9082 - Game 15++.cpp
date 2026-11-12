#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int cnt5, cnt7 = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x==5) cnt5++;
        else cnt7++;
    }

    if(cnt5 == 0) {
        cout << "Impossible";
        return 0;
    }
    int ans7 = -1, ans5 = -1;
    for(int i = 0;i <= cnt7; i++) {
        for(int j = 1; j <= cnt5; j++) {
            if((7 * i + 5 * j) % 3 ==0) {
                 if(i + j >= ans7 + ans5) {
                    ans7 = i;
                    ans5 = j;
                 }
            }
        }
    }
    

    if(ans7 == -1) {
        cout << "Impossible";
        return 0;
    } else {
        for(int i = 0; i < ans7; i++) cout << 7;
        for(int i = 0; i < ans5; i++) cout << 5;
    }

}
