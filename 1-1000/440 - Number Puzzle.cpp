#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    string original_bmw = s;
    for(int basla = 0; basla < s.length(); basla++) {
        for(int orta = basla + 1; orta < s.length(); orta++) {
            for(int son = orta + 1; son <= s.length(); son++) {
                string a = s.substr(0, basla);
                string L = s.substr(basla, orta - basla);
                string R = s.substr(orta, son - orta);
                string b = s.substr(son);

                string ans = a + R + L + b;
 
                if(ans > original_bmw) {
                    original_bmw = ans;
                }

                
            }
        }
    }

    cout << original_bmw << "\n";
}
