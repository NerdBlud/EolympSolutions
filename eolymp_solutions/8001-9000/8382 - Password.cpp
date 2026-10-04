#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSymbol = false;
    bool isLongEnough = (s.length() >= 8);

    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            hasLower = true;
        } else if (isupper(s[i])) {
            hasUpper = true;
        } else if (isdigit(s[i])) {
            hasDigit = true;
        } else {
            hasSymbol = true;
        }
    }


    
    cout << hasLower + hasUpper + hasDigit + hasSymbol + isLongEnough ;
}