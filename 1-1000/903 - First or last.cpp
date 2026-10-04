#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if(((n/100) > (n % 10)) || (n/100) < (n % 10)) cout << max(n/100, n%10);
    else cout << "=";
}
