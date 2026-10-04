#include <bits/stdc++.h>
using namespace std;

/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡆
⠀⠀⠀⠀⠀⢀⣶⣆⢀⠔⠁⠀⣷
⠀⠀⠀⠀⠀⠚⣿⣿⣷⡄⠀⠀⢸
⠀⠀⠀⠀⠀⣠⣺⣿⣿⡇⠀⠀⠸
⠀⠀⠀⠀⡸⣿⣿⣿⣿⡇⠀⠀⠀
⠀⠀⠀⡔⠁⢸⣿⣿⣿⣿⠀⠀⠀
⠀⠀⠌⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀
⠀⡌⠀⠀⠀⠀⢸⣿⣿⣿⡇⠀⠀
⠈⠀⠀⠀⠀⠀⢸⣿⣿⣿⡇⠀⠀
⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣷⠀⠀
⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣷⣄
⠀⠀⠀⠀⠀⠀⠛⠛⠛⠛⠛⠛⠉  written by: nerdblud.
*/

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define ar array
#define all(a) (a).begin(), (a).end()
#define sza(x) ((int)x.size())
#define pb push_back
#define makemycodefaster ios_base::sync_with_stdio(false); cin.tie(NULL);

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

int main() {
    makemycodefaster
    
    int m;
    cin >> m;
    
    int n = m;
    string min_ans = "";
    
    for (int i = 9; i >= 2; i--) {
        while (n % i == 0) {
            min_ans = char(i + '0') + min_ans; 
            n /= i;
        }
    }
    
    if (n > 1) {
        cout << "-1 -1\n";
        return 0;
    }
    
    n = m;
    string max_ans = "";
    
    for (int i = 2; i <= 9; i++) {
        while (n % i == 0) {
            max_ans = char(i + '0') + max_ans; 
            n /= i;
        }
    }
    
    cout << min_ans << " " << max_ans << "\n";
}