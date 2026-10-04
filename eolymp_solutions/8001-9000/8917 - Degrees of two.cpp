#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for(int i = 1; pow(2,i) < n; i++){
        cout << pow(2,i) << " ";
    }
}
