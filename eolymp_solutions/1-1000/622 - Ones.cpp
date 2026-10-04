#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
            n /= 2;
        }
        cout << count;
}