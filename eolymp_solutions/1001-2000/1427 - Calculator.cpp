#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long total = 0, num;
    char op;

    if (cin >> num) {
        total += num;

        while (cin >> op >> num) {
            if (op == '+') {
                total += num;
            } else if (op == '-') {
                total -= num;
            }
        }
    }

    cout << total;
}