#include <bits/stdc++.h>
using namespace std;

bool funksiya(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(') st.push(')');
        else if (c == '[') st.push(']');
        else if (c == ')' || c == ']') {
            if (st.empty() || st.top() != c) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string s;
    getline(cin, s); 
    while (n--) {
        getline(cin, s);
        if (funksiya(s)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}