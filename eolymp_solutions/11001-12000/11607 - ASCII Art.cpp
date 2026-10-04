#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int h, w;
    cin >> h >> w;

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            int n;
            cin >> n;
            
            if (n == 0) {
                cout << '.';
            } else {
                n += 64;  // ozum yazmamisam bunu (google)
                cout << (char)n;
            }
        }
        cout << "\n";
    }
}