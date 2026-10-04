#include <iostream>
#include <string>
using namespace std;

int main() {
    long long  n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    
    int i = 0;
    int say = 0;
    long long cavab = n;

        for (long long  j = i; j < n; j++) {
            if (s[j] == 'G') {
                say++;
            }

           while(say >= k) {
            cavab = min(cavab, j - i + 1);

            if(s[i] == 'G') {
                say--;
            }
            i++;
           }
        }

    cout << cavab;
}