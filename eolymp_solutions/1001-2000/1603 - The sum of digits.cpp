#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    
    n = abs(n);
    
    long long sum = 0;
    
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    
    cout << sum;
}