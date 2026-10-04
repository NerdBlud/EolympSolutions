#include <bits/stdc++.h>
using namespace std;

double alirza(double x) {
    return 3*sin(x);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double a,b,h;
    cin >> a >> b >> h;
    
    double x = a;
    while(x <= b) { 
        cout << fixed << setprecision(3) << x << " " << alirza(x) << endl;
        x += h;
    }

    return 0;
}
