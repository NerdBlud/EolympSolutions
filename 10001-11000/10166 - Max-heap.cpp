#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;

    priority_queue<int> pq;
    for(int i = 0; i < n; i++) {
        cin >> x;
        pq.push(x);
    }
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}
