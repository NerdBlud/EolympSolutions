#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int sehv[91];
    bool duz[91];
    int sum = 0, solved = 0;

    for(int i = 0; i < n; i++) {
        int h,m;
        char c,p;
        string verdict;

        cin >> h >> c >> m >> p >> verdict;
        
        if(duz[p]) continue;

        if(verdict == "OK") {
            duz[p] = true;
            solved++;
            sum += (h*60+m) + sehv[p] * 20;
        } else if(verdict != "CE") {
            sehv[p]++;
        }
    }

    cout << solved << " " << sum;
}
