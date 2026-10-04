#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int n1 = n / 100;
    int n2 = (n/10) % 10;
    int n3 = n%10;

    int ans1 = n1*10+n2;
    int ans2 = n1*10+n3;
    int ans3 = n2*10+n3;

    cout << max({ans1,ans2,ans3});
}
