#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fflag ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int MAX_N = 2e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


int main() {
    fflag
    
    int n, m;
    cin >> n >> m;

    pair<int, int> a[105];
    pair<int, int> b[105];
    
    int sum = 0;
    for(int i = 0;i<n;i++) { 
        int d,e;
        cin >> d >> e;
        sum += d;
        a[i] = {sum, e};
    }

    sum = 0;
    for(int i=0;i<n;i++) { 
        int d,e;
        cin >> d >> e;
        sum += d;
        b[i] = {sum, e};
    }

    int ans = 0, i = 0, j = 0;

    while(i < n && j < m) {
        ans = max(ans, b[j].second - a[i].second);

        if(a[i].first < b[j].first) { 
            i++;
        } else if(a[i].first > b[j].first) { 
            j++;
        } else {
            i++;
            j++;
        }
    }

    cout << ans;
}
