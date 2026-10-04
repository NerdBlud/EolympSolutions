#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int sum;
    cin >> sum; 
    
    char valorant_operator;
    int n;
    
    while (cin >> valorant_operator >> n) { 
        if (valorant_operator == '+') { 
            sum += n;
        } else if (valorant_operator == '*') { 
            sum *= n;
        }
    }

    cout << sum;
}