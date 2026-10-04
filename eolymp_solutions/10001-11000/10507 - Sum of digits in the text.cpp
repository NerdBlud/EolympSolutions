#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    long long cnt = 0;
    while(getline(cin,s)) { 
        for(int i=0;i<s.size();i++) {
            if(isdigit(s[i])) { 
                cnt += s[i] - '0';
            }
        }
    }
    cout << cnt;
}
