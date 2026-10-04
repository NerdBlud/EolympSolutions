#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b,ans=0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        bool duz_prime = true;
        if(i <= 1) duz_prime = false;
        
        for(int j = 2; j*j <= i; j++){
            if(i % j == 0) {
                duz_prime = false;
                break;
            }
        }

        if(duz_prime == true) { 
            string s = to_string(i);
            reverse(s.begin(), s.end());
            int c = stoi(s);

            bool ters_prime = true;
            if(c <=  1) ters_prime = false;
            for(int j = 2; j*j <= c; j++) {
                if(c % j == 0){
                    ters_prime = false;
                    break;
                }
            }

            if(ters_prime == true) {
                ans++;
            }

        }
    }

    cout << ans;
}

