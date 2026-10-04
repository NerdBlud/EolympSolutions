#include <bits/stdc++.h>
using namespace std;

int cem(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;

    int minimal_toplama_emeliyyati_icra_eden = INT_MAX;
    int cnt = 0;

    for (int i = m; i <= n; i++) {
        int curr = cem(i);

        if (curr < minimal_toplama_emeliyyati_icra_eden) {
            minimal_toplama_emeliyyati_icra_eden = curr;
            cnt = 1;
        } else if (curr == minimal_toplama_emeliyyati_icra_eden) {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}