#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin >> n >> k;


    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    deque<int> dq;

    for(int i = 0; i < n; i++) {
        if(!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        while(!dq.empty() && a[dq.back()] >= a[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if(i >= k - 1){
            cout << a[dq.front()] << " ";
        }
    }
}
