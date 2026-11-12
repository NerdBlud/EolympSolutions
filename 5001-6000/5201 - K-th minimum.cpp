#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >>n>>k;

    vector<int>a;
    for(long long i = 1; i<= n; i++) {
        long long ans = (132*i*i*i + 77*i*i + 1345 * i + 1577) % 1743;
        a.push_back(ans);
    }

    sort(a.begin(), a.end());

    cout << a[k-1];
}
