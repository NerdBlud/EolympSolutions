#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    
    int a = 0;
    int b = 0;
    
    for (char c : s) {
        a = (a * 2 + (c - '0')) % 3;
        b = (b * 2 + (c - '0')) % 5;
    }
    
    if (a == 0 && b == 0) {
        cout << "BOTH\n";
    } else if (a == 0) {
        cout << "FIRST\n";
    } else if (b == 0) {
        cout << "SECOND\n";
    } else {
        cout << "NONE\n";
    }
    
    return 0;
}