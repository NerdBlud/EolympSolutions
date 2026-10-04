#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m,d,s;
    cin >> n >> m >> d >> s;

    int p_drink[1005], m_drink[1005], t_drink[1005];
    for(int i = 0; i < d; i++) {
        cin >> p_drink[i] >> m_drink[i] >> t_drink[i];
    }

    int sick_time[55] = {0}; // m + 5 array gotururuk kecmesin limiti deye
    for(int i = 0; i < s; i++) { 
        int p,t;
        cin >> p >> t;
        sick_time[p] = t; // hansi zaman xeste olubsa o zamana berabner edirik.
    }

    int ans = 0;

    for(int milk = 1; milk <= m; milk++) { 
        bool bad = true; // sudun pis olub olmadigini yoxlayaq

        for(int person = 1; person <= n; person++) { 
            // eger adam xestelense, bu sudu evvelceden icib icmediyini yoxla
            if(sick_time[person] > 0) {
                bool drank_before = false;

                for(int i =0; i < d; i++) {
                    if(p_drink[i] == person && m_drink[i] == milk && t_drink[i] < sick_time[person]) {
                        drank_before = true; // evvelceden icibse drank_before = true
                        // demeli bize lazimdirki, eger icibse tekrarlanma bas verirse
                        // 100% icib.
                        break;
                    }
                }
                if(!drank_before) {
                    bad = false; 
                    // eger qabaqcadan icilmeyibse sud, xarab deyil. possible_bad ola
                    // bilmez
                    break;
                }
            }
        }

        if(bad) {
            int dose = 0;
            int a[55] = {0}; // eger bu sudu icibse burada saxlayacam

            for(int i = 0; i < d; i++) {
                if(m_drink[i] == milk) { 
                    a[p_drink[i]] = 1; // sudu icibse 1 olaraq qeyd edek, icmeyibse 0 olaraq qalacaq.
                }
            }

            for(int i = 1; i <= n; i++) {
                if(a[i] == 1) dose++;
            }

            ans = max(ans, dose); // maximum dozani gotururuk, sud icmesede xestelenen
            // adamlarada eyni zamanda doza lazimdir.
        }
    }

    cout << ans;
}
