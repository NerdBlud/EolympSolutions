#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  

    double bucket = 0.0;
    int counter = n;
    int k = 0;

    while (bucket <= 0.5) {
        bucket += 1.0 / counter;
        k++;
        counter--;
    }

    cout << (n - k + 1) << endl;
    return 0;
}
