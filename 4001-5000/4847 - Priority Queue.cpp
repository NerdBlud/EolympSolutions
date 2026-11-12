#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    vector<pair<int, string>> v;
    string cmd, s;
    int x;

    while(cin >> cmd) {
        if(cmd == "ADD") {
            cin >> s >> x;
            v.push_back({x,s});
        } else if (cmd == "CHANGE") {
            cin >> s >> x;
            for(auto &i : v) {
                if(i.second == s) {
                    i.first = x;
                    break;
                }
            }
        } else {
            int ans = 0;
            for(int i = 1; i < v.size(); i++) { 
                if(v[i].first > v[ans].first) ans = i;
            }
           cout << v[ans].second << " " << v[ans].first << "\n";
           v[ans] = v.back();
           v.pop_back();
        }
    }
}
