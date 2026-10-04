#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a;
    cin >> a;

    if (a % 2 == 0) {
        cout << a * a;
    } else {
        cout << a * a * a;
    }

    return 0;
}