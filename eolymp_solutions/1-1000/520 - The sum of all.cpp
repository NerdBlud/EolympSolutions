#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long long ans=0;
    while(cin >> n) {
      ans = n + ans;
    }
    cout << ans;
}
