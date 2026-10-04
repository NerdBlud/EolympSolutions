#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    string rules[67]; 
    for (int i = 0; i <= q; i++) {
        getline(cin, rules[i]); 
    }

    int r;
    cin >> r;
    
    while (r--) {
        int num;
        cin >> num;
        
        if (num >= 1 && num <= q) {
            cout << "Rule " << num << ": " << rules[num] << "\n";
        } else {
            cout << "Rule " << num << ": No such rule\n";
        }
    }
}