#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    string s;
    cin >> n >> s;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long max_one = -1;
    long long ans = -1;

    for(int i = n-1; i >=0; i--) {
        if(s[i] == '1') {
            max_one = max(max_one, a[i]);
        } else {
            if(max_one > a[i]) {
                ans = max(ans, a[i] + max_one);
            }
        }
    }
    cout << ans;
}


/*
Məsələdə i < j, s[i] == '0', s[j] == '1' və s[i] < a[j] ödəyən
ən boyük a[i] + a[j] cəmini istəyir.

Sağdan sola i < j şərti ödənir. çünki hər keçdiyimiz 0ların sağında
qalır 1lər.

Hər dəfə '0' simvoluna çatanda sağda qalan ən böyük '1' qiymətinə
max_one baxırıq. Əgər ödəyirsə əlimizdə olan max_one ilə müqayisə
edib sonra maximumu cout edirik.

s - 0,1lerden ibaret stringdi
*/