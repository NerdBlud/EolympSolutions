#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long long sum = 0, sum_2 = 0; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            if (i == j) {
                sum += x;
            } 
            if (i + j == n - 1) { 
                sum_2 += x;
            }
        }
    }
    cout << sum << " " << sum_2;
}