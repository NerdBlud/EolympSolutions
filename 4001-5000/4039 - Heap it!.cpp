#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    priority_queue<int> pq;

    while (t--) {
        int n;
        cin >> n;

        if (n == 0) {
            int x;
            cin >> x;
            pq.push(x);
        } else {
            cout << pq.top() << "\n";
            pq.pop();
        }
    }
}