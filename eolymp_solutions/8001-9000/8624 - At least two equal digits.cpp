#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int s;
    cin >> s;

    set<int> m;
    while(s > 0){
        m.insert(s%10);
        s/=10;
        
    }
    if (m.size() < 5) cout << "YES";
    else cout << "NO";
}
