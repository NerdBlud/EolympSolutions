#include <bits/stdc++.h>
using namespace std;

bool startsWith(string s1, string s2) {    
    for (int i = 0; i < s2.length(); i++) {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

bool endsWith(string s1, string s3) {    
    int start = s1.length() - s3.length();
    for (int i = 0; i < s3.length(); i++) {
        if (s1[start + i] != s3[i]) return false;
    }
    return true;
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (startsWith(s1, s2)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    if (endsWith(s1, s3)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
}