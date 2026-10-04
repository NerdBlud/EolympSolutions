#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   int t;
   cin >> t;

   while(t--) {
    long long n, m;
    cin >> n >> m;

    long long ans = (m*m*(n+1))/2;
    cout << ans << "\n";
   }
}
