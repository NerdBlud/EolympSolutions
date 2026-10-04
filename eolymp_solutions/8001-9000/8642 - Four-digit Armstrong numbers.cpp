#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b;
    cin >> a >> b;

    for(long long i = a; i <= b; i++) {
        int one = i % 10;
        int two = (i / 10) % 10;
        int three = (i / 100) % 10;
        int four = i / 1000;

        if((one*one*one*one + two*two*two*two + three*three*three*three + four*four*four*four) == i){
            cout << i << " ";
        } else {
            continue;
        }
    }


}
