#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a,b,c;
    cin >> a >> b;

    set<long long> s;

    int i = -1 * ((b + 1) - a);
    while(i++) {
        c = a + (i) * -1;
        long long firs = c % 10;
        long long tens = (c / 10) % 10;
        long long hund = (c/100) % 10;
        long long thou =  c/1000;
        if((firs == tens || firs == hund || firs == thou) || (tens == hund || tens == thou) || (hund == thou) ) {
            continue;
        } else {            
            s.insert(c);
        }
    }

    for(long long num : s) {
        cout << num << " ";
    }
}