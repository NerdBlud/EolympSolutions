#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    while (cin >> s) {
        stack<char> st;
        for (char c : s) {
            if (!st.empty() && ((st.top() == '(' && c == ')') || (st.top() == '[' && c == ']') || (st.top() == '{' && c == '}'))) {
                st.pop();
            } else {
                st.push(c);
            }
        }

        if (st.empty()) {
            cout << 0;
        } else {
            cout << 1;
        }
    }
    cout << "\n";

    return 0;
}