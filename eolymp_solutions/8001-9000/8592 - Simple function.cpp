#include <bits/stdc++.h>
using namespace std;

float solve(float n) {
   return n + sin(n); 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    float n;
    cin >> n;

    cout << fixed << setprecision(4) << solve(n);

}
