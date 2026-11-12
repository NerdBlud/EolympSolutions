#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if(n % 10 != 0) {
       cout << -1;
       return 0;
    } 

    vector<int> notes = {500,200,100,50,20,10};
    int total = 0;

    for(auto c: notes) { 
        total += n / c;
        n %= c;
    }

    cout << total;
}
