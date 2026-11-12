#include <bits/stdc++.h>
using namespace std;

long long binarysearch(int k, vector<long long>& a, long long maxx) {
    long long l = 1;
    long long r = maxx;
    long long ans = 0;


    while(l <= r) {
        long long mid = l + (r - l) / 2;
        long long cnt = 0;

        for(int i = 0; i < a.size(); i++) {
            cnt += a[i] / mid;
        }

        if(cnt >= k) {
            ans = mid;
            l = mid + 1;
        } else { 
            r = mid - 1;
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    long long maxx = 0;

    for(int i =0; i < n; i++) {
        cin >> a[i];
        if(a[i] > maxx){
           maxx = a[i];
        }
    }

    cout << binarysearch(k, a, maxx);
}
