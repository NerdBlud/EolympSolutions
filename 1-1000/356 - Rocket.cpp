#include <bits/stdc++.h>
using namespace std;

bool funksiya(long long k, double a, double v, double t) {
    double tson = (sqrt(v*v + 2 * a * k) - v) / a;
    double tbasla = (sqrt(v*v + 2 * a * (k-1)) - v) / a;
    return(tson - tbasla) < t;
} // verilen metr T saniyeden az bir vaxta kecir?

long long binarySearch(double a, double v, double t) {
    long long L = 1;
    long long R = LLONG_MAX;
    long long ans = LLONG_MAX;

    while(L <= R) {
        long long mid = L + (R-L) / 2;
        // 1ci hal: True ---> Demeli bizim midimizden sagda hemcinin
        // 1 saniyeden az bir vaxtda gedilen yol var ve biz bunlara baxiriq.
        // 2ci hal: False ---> Burda false olarsa raketa helede cox yavas gedir.
        // ona gore saga dogru gedirikki metri verilen t zamandan az gedenleri goturek
        if(funksiya(mid, a, v, t)) { 
            ans = mid;
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   double a,v,t;
   cin >> a >> v >> t;
   
   cout << binarySearch(a,v,t); 
}
