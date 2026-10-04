#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    long long ttl_b = 0;
    long long ttl_g = 0;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        ttl_b += a;
        ttl_g += b;
    }

    long long oglan = (ttl_b + m - 1) / m;
    long long qiz = (ttl_g + m - 1) / m;

    cout << oglan + qiz << "\n";

}