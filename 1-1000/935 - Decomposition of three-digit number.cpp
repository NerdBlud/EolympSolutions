#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a = abs(n);
    cout << a / 100 << endl << (a / 10) % 10 << endl << a % 10;
}
