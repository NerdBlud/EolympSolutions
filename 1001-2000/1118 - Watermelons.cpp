#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n < 2) {
        cout << "Ooops!\n";
        return 0;
    }

    int min_weight = 30001;
    int max_weight = -1;

    for (int i = 0; i < n; ++i) {
        int w;
        cin >> w;
        if (w < min_weight) {
            min_weight = w;
        }
        if (w > max_weight) {
            max_weight = w;
        }
    }

    cout << min_weight << " " << max_weight << "\n";
}