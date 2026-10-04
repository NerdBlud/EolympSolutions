#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;

    if(0 < a && a < 4) cout << "Initial";
    else if(3 < a && a < 7) cout << "Average";
    else if(6 < a && a < 10) cout << "Sufficient";
    else if(9 < a && a < 13) cout << "High";

}
