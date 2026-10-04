#include <bits/stdc++.h>
using namespace std;

int alirza(int a, int b, int c) { 
    int arr[] = {a, b, c};
    
    sort(arr, arr + 3);
    
    return arr[1];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    cout << alirza(a, b, c);
    
    return 0;
}