#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    cout << pow((n/1000) + ((n / 100) % 10) + (n/10) % 10 + n % 10, 2);
}
