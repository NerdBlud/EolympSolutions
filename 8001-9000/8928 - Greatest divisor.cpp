#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin>>n;
    int max_val = 1;
    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0) {
            max_val = n / i;
            break;
        }
    }
    cout<<max_val;
}