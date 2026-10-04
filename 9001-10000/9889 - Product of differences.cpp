#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fflag ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    fflag
    ll n,m;
    cin >> n >> m;
    ll a[100005];
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    if(n > m) { 
        cout << 0;
        return 0;
    }
    
    ll ans = 1;
    for(int i = 0; i<n;i++) {
    	for(int j=i+1; j<n;j++) {
    	ll sum = abs(a[i]-a[j])%m;
    	ans = (ans*sum)%m;

        if(ans == 0) {
            cout << 0;
            return 0;
        }
    	}
    }
    
    cout <<ans;
    

}