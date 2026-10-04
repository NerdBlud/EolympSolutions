#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
        
    double ans = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < ans) {
            ans = arr[i];
        }
    }
        
    cout << fixed << setprecision(2) << ans * 2.0 << "\n";
}
