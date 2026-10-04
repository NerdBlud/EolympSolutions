#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    getline(cin,n);

    int cnt_two = 0, cnt_five =0;

    for(int i = 0; i < n.length(); i++) { 
        if(n[i] == '2') { 
            cnt_two++;
        } else if (n[i] == '5') {
            cnt_five++;
        }
    }

    if(cnt_two > cnt_five) { 
        cout << '2';
    } else if (cnt_two < cnt_five) {
        cout << '5';
    } else {
        cout << "=";
    }
}
