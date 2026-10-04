#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, say=0;
    float l;

    if (cin >> l >> k) {
        while (l > 1) {
            l = l / k;
            if (l > 1) {
                say++;
            }
        }
        cout << say << endl;
    }
}