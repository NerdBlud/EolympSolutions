#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long k;
        cin >> k;

        int ans = k % 3;

        if (ans == 1) {
            cout << "VGC\n";
        } else if (ans == 2) {
            cout << "CVG\n";
        } else {
            cout << "GCV\n";
        }
    }
}