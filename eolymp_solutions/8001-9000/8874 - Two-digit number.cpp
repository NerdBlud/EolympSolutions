#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    
    if(n > 9 && n < 100 || n < -9 && n > -100) { 
        cout << "Ok";
    } else { 
        cout << "No";
    }
}