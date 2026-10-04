#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int m = 1; m <= 12; ++m) {
        int c = n - 31 * m;
        if (c > 0 && c % 12 == 0) {
            int d = c / 12;
            if (d >= 1 && d <= 31) {
                if (d < 10) cout << "0";
                cout << d << "/";
                if (m < 10) cout << "0";
                cout << m << endl;
                break;
            }
        }
    }

}