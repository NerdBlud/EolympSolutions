#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s,t,ans;
    cin >> s >> t;

    int yangotaksi = s.find(t); // tni tapiriq hardan basladigini bilirik
    while(yangotaksi != string::npos) {  // t olmayana qeder yoxlama edirik
        s.erase(yangotaksi, t.length()); // tnin basladigi yerden t qeder silirik (tni sil)

        yangotaksi -= t.length(); // yeniden hemen addim qeder geriye qayidirik yeniden yoxlayiriq sozu
        if(yangotaksi < 0) yangotaksi = 0; // menfi olmamasini yoxlayiriq, menfi olsa alinmir.
        yangotaksi = s.find(t, yangotaksi); //  loopu tezden yoxla.
    }
    
    cout << s;
}
