#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    int m = -1;
    int cnt = 0;
    long long i = n;
    while (i > 0) {
        int b = i % 10;
        if (b > m) {
            m = b;
            cnt = 1;
        } else if (b == m) {
            cnt++;
        }
        i /= 10;
    }

    cout << cnt << "\n";

}