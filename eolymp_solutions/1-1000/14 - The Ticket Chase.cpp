#include <bits/stdc++.h>
using namespace std;

// Daha qısa və anlaşılan sadə ədəd yoxlanışı
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, p;
    cin >> n >> p;

    int ans = -1;
    
    for (int i = p + 1; i < p + n; ++i) {
        if (isPrime(i)) {
            ans = i - p - 1; 
            break;
        }
    }
    
    cout << ans << "\n";
}