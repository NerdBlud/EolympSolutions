#include <bits/stdc++.h>
using namespace std;

float alirza_cpp_bilir(string n) {
    int sum = 0;
    for(int i = 0; i < n.length(); i++) {
       sum += n[i] - '0';
    }

    return sqrt(sum);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin >> n;
    
    cout << fixed << setprecision(3) << alirza_cpp_bilir(n);
}