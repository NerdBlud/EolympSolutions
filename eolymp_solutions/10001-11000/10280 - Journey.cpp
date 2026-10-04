#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int min_x = 2000;
    int max_x = -1;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < min_x) {
            min_x = x;
        }
        if (x > max_x) {
            max_x = x;
        }
    }

    cout << 2 * (max_x - min_x) << "\n";

    return 0;
}