#include <iostream>

using namespace std;

int main() {
    long long a, b, c;

    while (cin >> a >> b >> c && (a != 0 || b != 0 || c != 0)) {
        long long hipotonuz, kaklet1, kaklet2;

        if (a >= b && a >= c) {
            hipotonuz = a;
            kaklet1 = b;
            kaklet2 = c;
        } else if (b >= a && b >= c) {
            hipotonuz = b;
            kaklet1 = a;
            kaklet2 = c;
        } else {
            hipotonuz = c;
            kaklet1 = a;
            kaklet2 = b;
        }

        if (kaklet1 * kaklet1 + kaklet2 * kaklet2 == hipotonuz * hipotonuz) {
            cout << "right\n";
        } else {
            cout << "wrong\n";
        }
    }
}