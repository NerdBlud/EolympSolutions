#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long cnt = 0;
    for (long long i = 1; i * i <= b; i++) {
        cnt += (i * i >= a);
    }

    cout << cnt;
}