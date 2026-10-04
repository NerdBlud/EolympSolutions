#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int arr[100000];
    int n,sum=0,cnt=0;

    while(cin >> n){
        cnt++;
        sum += n;
    }
    
    cout << cnt << " " << sum;
    
}
