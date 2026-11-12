#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin>>n>>k;
    if(n<k||n>3*k){cout<<"Impossible";return 0;}
    int extra=n-k;
    for(int i=0;i<k;i++){int a=min(2,extra);cout<<1+a<<" ";extra-=a;}
    
}
