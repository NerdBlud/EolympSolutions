#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, a = 0, b = 0, first = 0, second = 0;
    cin >> n;
    while(n--) { 
        cin >> first >> second;
        
        if(first > second) {
            a++;
        } else if (second > first) { 
            b++;
        }
    }

    if(a > b) {
        cout << 1;
    } else if (b > a) { 
        cout << 2;
    } else {
        cout << 0;
    }
    
}
