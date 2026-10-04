#include <bits/stdc++.h>
using namespace std; 

int main() {
    string s;
    getline(cin, s); 

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] == ' ') { 
            left++;
        } 
        else if (s[right] == ' ') { 
            right--; 
        } 
        else if (s[left] != s[right]) {
            cout << "NO"; 
            return 0;
        } 
        else {
            left++;
            right--;
        }
    }

    cout << "YES";
}