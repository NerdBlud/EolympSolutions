#include <bits/stdc++.h>
using namespace std;


bool binarysearch(int n, int a[], int x) {
    int l = 0, r = n-1;

    while(l <= r) {
        int mid = l + (r-l) /2;

        if(a[mid] == x) {
            return true;
        }

        if(a[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
     }

     return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;

    int a[n];
    for(int i = 0; i <n; i++) {
        cin >> a[i];
    }

    while(q--) {
        int x;
        cin >> x;
        
        if(binarysearch(n,a,x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
