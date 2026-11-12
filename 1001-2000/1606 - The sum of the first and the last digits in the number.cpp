#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string a = to_string(abs(n));
    cout << (a.front() - '0') + (a.back() - '0');
}
