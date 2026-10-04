#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    if(n % 6 == 0 && abs(n) > 9 && abs(n) < 100) { 
        cout << "YES";
    } else {
        cout << "NO";
    }
}
