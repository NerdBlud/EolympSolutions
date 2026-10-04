#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // example below, replace it with your solution
    int n,m,k;
    cin>>n >> m >> k;
    int oglan, qiz = 0;
    if (n%k == 0) { 
        oglan = n / k;
    } else { 
        oglan = (n/k) + 1;
    }

       if (m%k == 0) { 
        qiz = m / k;
    } else { 
        qiz = (m/k) + 1;
    }

    cout << oglan + qiz;
}
