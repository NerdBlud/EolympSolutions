#include <bits/stdc++.h>
using namespace std;

int alirza_english_boy(int n) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int min = INT_MAX;
    int ans = -1;

    for (int i = 0; i < n; i++) {
        int n;
        cin >> n;
        
        int sum = alirza_english_boy(n);

        if (sum <= min) {
            min = sum;
            ans = n;
        }
    }

    cout << ans << "\n";
}