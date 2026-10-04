#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b;
    cin >> a >> b;
    long long ans;

    for(long long i = a; i <= b; i++) {
        ans += i*i;
    }

    cout << ans;
}
