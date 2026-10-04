#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   int n;
   float sum = 0.0;
   cin >> n;
   float arr[n];

   for(int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
   }
   cout << sum;
}
