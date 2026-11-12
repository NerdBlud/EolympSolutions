#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    
    long long cnt[26];
    for(char c : s) {
        cnt[c-'a']++;
    }

    long long ans = 0;

    for(int i = 0; i < 26; i++) {
        for(int j = i + 1; j < 26; j++) {
            ans += cnt[i] * cnt[j];
        }
    }

    for(int i = 0; i < 26; i++) {
        if(cnt[i] >= 2) {
            ans++;
            break;
        }
    }

    cout << ans;
}
