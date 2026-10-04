#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int i, j;
    
    cin >> s >> i >> j;
    reverse(s.begin() + i - 1, s.begin() + j);
    cout << s << "\n";
}