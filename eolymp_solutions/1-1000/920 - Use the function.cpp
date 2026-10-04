#include <bits/stdc++.h>
using namespace std;

float alirza(float x, float y, float z) {
return min({max(x, y), max(y, z), x + y + z});
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    float x,y,z;
    cin >> x >> y >> z;

    cout << fixed << setprecision(2) << alirza(x,y,z);
}
