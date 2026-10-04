#include <bits/stdc++.h>
using namespace std;

long long salam(long long aa) {
    long long res = 1;
    for(long long i = 0; i < aa; i++) {
        res *= 2;
    }

    return res;
}

long long binarySearch(long long m) {
    long long L = 0;
    long long R = 40;
    long long ans = 0;

    while(L <= R) {
        long long mid = L + (R - L) / 2;

        long long curr = salam(mid);

        if(curr <= m){ 
            ans = mid;
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }
    
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long m;
    cin >> m;

    cout << binarySearch(m) << "\n";
}
