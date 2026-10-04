#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2; 

    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

    int start = h1 * 3600 + m1 * 60 + s1;
    int end = h2 * 3600 + m2 * 60 + s2;

    int alirza_alizade_saat = start - end;

    int h = abs(alirza_alizade_saat) / 3600;           
    int m = (abs(alirza_alizade_saat) % 3600) / 60;     
    int s = abs(alirza_alizade_saat) % 60;             

    cout << h << " " << m << " " << s << endl;

}