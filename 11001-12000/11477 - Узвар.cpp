#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int k = min({a, b / 2, c / 4});
    
    cout << 7 * k << "\n";
    
}