#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int n1 = n / 100;
    int n2 = (n/10)%100;
    int n3 = n%100;

    if(n1 == 37 || n2 == 37 || n3 == 37) cout << "YES";
    else cout << "NO";

}
