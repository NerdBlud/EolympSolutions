#include <bits/stdc++.h>
using namespace std;

int yemeyivi_ye(int n, int m) { 
    while(n-- && m--) { 
        if(n == 0) { 
            return m;
        } else if (m == 0) { 
           return n;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;

    cout << yemeyivi_ye(n,m);}
