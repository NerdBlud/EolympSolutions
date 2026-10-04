#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;

    int sum = 0;

    for(int i = 0; i < n.length(); i++) {
        int a = n[i] - '0';
        if(a % 2 == 0) { 
            sum += a;
        }
    }

    cout << sum;
}
