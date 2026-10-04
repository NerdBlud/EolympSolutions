#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   int r,w,l;
   cin >> r >> w >> l;
   if (w * w + l * l <= 4 * r * r) cout << "YES\n";
   else cout << "NO\n";
}
