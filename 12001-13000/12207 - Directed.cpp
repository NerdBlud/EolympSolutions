#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;cin>>n>>x;
        int ans = 0;
        if(x == 0) ans++;
        vector<int>a(n);
        for(auto &i:a){
            cin>>i;
            x += i;
            if(x == 0) ans++;
        }
        cout << ans << "\n";
    }
}