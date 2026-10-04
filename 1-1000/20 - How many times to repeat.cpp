#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    int cnt = 0;
    while (n > 0) {
        ll i = n;
        ll sum = 0;
        while (i > 0) {
            sum += i % 10;
            i /= 10;
        }
        n -= sum;
        cnt++;
    }

    cout << cnt;
}