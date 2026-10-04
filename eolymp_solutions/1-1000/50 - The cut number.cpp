#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int d, k;
    cin >> d >> k;
    
    string a[10];
    for(int i = 0; i < k; i++) {
        cin >> a[i];   

        long long sil = stoll(a[i]);
        a[i] = to_string(sil);
    }

    sort(a, a+k);

    string ans[400000];
    int total = 0;

        while(1){
        string temp = "";

        for(int i =0; i < k; i++) {
            temp += a[i];
        }
    if(!(temp[0] == '0' && temp.length() > 1)) {

        int res = 0;

        for (int i =0; i < temp.size(); i++) {
            res *= 10;
            res += temp[i] - '0';
            res %= d;
        }

        if(res == 0) {
            ans[total] = temp;
            total++;        
        }
    }

        if(next_permutation(a,a+k) == 0) break;
    }

   sort(ans, ans+total);

    int cnt =0;
    for(int i = 0; i < total; i++) {
        if(i == 0 || ans[i] != ans[i-1]) {
            cnt++;
        }
    }

    cout << cnt;


}
