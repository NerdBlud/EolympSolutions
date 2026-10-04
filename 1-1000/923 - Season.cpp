#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    if (n == 3 || n == 4 || n == 5) {
        cout << "Spring";
    } else if( n == 6 || n == 7 || n == 8) {
        cout << "Summer";
    } else if(n == 9 || n == 10 || n == 11) {
        cout << "Autumn";
    } else {
        cout << "Winter";
    }
}
