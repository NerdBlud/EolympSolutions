#include <bits/stdc++.h>
using namespace std;

vector<long long> divisors(long long n) { 
    vector<long long> a;
    
    for(long long i = 1; i * i <= n; i++) { 
        if(n % i == 0) {
            a.push_back(i);

            if (i != n / i) {
                a.push_back(n / i);
            }
        }
    }

    sort(a.begin(), a.end());
    return a;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long k, n, m;
    cin >> k >> n >> m;

    vector<long long> a = divisors(n);

    for(int i = 0; i < a.size(); i++) {
        if(m % (a[i] + k) == 0) {
            cout << a[i] << "\n"; 
        } 
    }
}