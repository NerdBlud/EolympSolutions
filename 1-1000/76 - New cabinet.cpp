#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double a, b, x, y, z;
    cin >> a >> b >> x >> y >> z;

    vector<double> aaa = {a, b};
    vector<double> bbb = {x, y, z};

    sort(aaa.begin(), aaa.end());
    sort(bbb.begin(), bbb.end());

    if (bbb[0] < aaa[0] && bbb[1] < aaa[1]) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }

    return 0;
}