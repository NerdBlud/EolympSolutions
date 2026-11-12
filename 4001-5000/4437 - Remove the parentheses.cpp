#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == '(' && c == ')') {
            st.pop();
        } else {
            st.push(c);
        }
    }

    cout << st.size() << "\n";

    return 0;
}