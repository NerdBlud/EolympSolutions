#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    long long min_v = LLONG_MAX; 
    
    while(n--) {
        long long x;
        cin >> x;
        if(x < min_v) {
            min_v = x;
        }
    }
    
    cout << min_v << endl;

}