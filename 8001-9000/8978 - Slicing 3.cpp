#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;
    cin >> a;

    int b = a.length();

    cout << a[1] << a[3] << a[9] << "\n";
    cout << a[0] << a[1] << a[b - 1] << "\n";

    for (int i = b - 5; i < b; i++) {
        cout << a[i];
    }
    cout << "\n";

    for (int i = 0; i < b - 4; i++) {
        cout << a[i];
    }
    cout << "\n";

    string c = "";
    for (int i = 0; i < b; i += 2) {
        c += a[i];
    }
    
    cout << c << "\n";
    cout << c.length() << "\n";

    for (int i = b - 1; i >= 0; i -= 2) {
        cout << a[i];
    }
    cout << "\n";
}