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
    
    int n;
    cin >> n;
    
    vector<int> count[82];

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;

        int sum = 0;
        int temp = val;

        while(temp > 0) { 
            sum += temp % 10;
            temp /= 10;
        }

        count[sum].push_back(val);
    }

    for(int i = 0; i < 82; i++) {
        sort(count[i].begin(), count[i].end(), greater<int>());

        for(int j = 0; j < count[i].size(); j++) {
            cout << count[i][j] << " ";
        }
    }
}
