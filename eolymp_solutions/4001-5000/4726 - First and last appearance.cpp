#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    getline(cin, s);
    
    int first = s.find('f');
    
    if (first != string::npos) {
        int last = s.rfind('f');
        
        if (first == last) {
            cout << first;
        } else {
            cout << first << " " << last;
        }
    }
}