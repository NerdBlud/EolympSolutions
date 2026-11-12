#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    stack<int> st;
    int maxx = 0, last = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            if (st.empty()) {
                last = i;
            } else {
                st.pop();
                if (st.empty()) {
                    maxx = max(maxx, i - last);
                } else {
                    maxx = max(maxx, i - st.top());
                }
            }
        }
    }

    cout << maxx << "\n";
}