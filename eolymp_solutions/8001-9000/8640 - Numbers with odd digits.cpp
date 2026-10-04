#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        long long firs = i % 10;
        long long tens = (i / 10) % 10;
        long long hund = (i/100) % 10;
        long long thou =  i/1000;
        if(firs % 2 != 0 && tens % 2 != 0 && hund % 2 != 0 && thou % 2 != 0){
            cout << i << " ";
        } else { 
            continue;
        }
    }
}
