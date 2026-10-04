#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int gold = -1, silver = -1;

    for (int i = 0; i < n; ++i) {
        int cnt;
        cin >> cnt;
        
        if (cnt > gold) {
            silver = gold;
            gold = cnt;
        } else if (cnt > silver && cnt != gold) {
            silver = cnt;
        }
    }
    
    cout << silver << "\n";
}