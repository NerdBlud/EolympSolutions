#include <bits/stdc++.h>
using namespace std;

int main() {
    int e, f, c;
    cin >> e >> f >> c;

    int sum = 0;
    int n = e + f;

    while (n >= c) {
        int q = n % c;
        sum += n / c;
        n = n / c + q;
    }

    cout << sum << endl;

}