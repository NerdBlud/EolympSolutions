#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, numb, ans = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> numb;
            if(i == j && numb == 1) ans = 1;
        }
    }
    if(ans == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}