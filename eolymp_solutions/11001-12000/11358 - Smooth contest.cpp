#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a[5] = {0};
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < 4; i++) {
        if(abs(a[i] - a[i+1]) > 1) {
            cout << "No";
            return 0;
        } 
    }

    cout << "Yes";
}
