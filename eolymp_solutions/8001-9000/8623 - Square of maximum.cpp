#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin >> n;

       int n1 = n / 100;
       int n2 = (n/10)%10;
       int n3 = n % 10;

       long long m1 = max({n1,n2,n3});
       long long m3 = min({n1,n2,n3});
       long long m2 = (n1 + n2 + n3) - m1 - m3;
       
       long long num = m1 * 100 + m2 * 10 + m3;
       cout << num * num;
       
}