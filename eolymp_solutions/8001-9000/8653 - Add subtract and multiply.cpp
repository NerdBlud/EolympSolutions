#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    int a;

    int sum = 0;
    while(cin >> n >> a) { 
        if(n == "add") { 
            sum += a;
        } else if (n == "subtract") {
            sum -= a;
        } else if (n == "multiply") {
            sum *= a;
        }
    }
    cout << sum;
}
