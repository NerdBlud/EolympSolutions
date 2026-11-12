#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double x1, y1;
    double x2, y2, z2;

    if (cin >> x1 >> y1 >> x2 >> y2 >> z2) {
        double dx = x2 - x1;
        double dy = y2 - y1;
        double dz = z2;

        double F = sqrt(dx * dx + dy * dy + dz * dz);
        double D = 1.0 / F;

        cout << fixed << setprecision(3) << D << "\n";
    }
}