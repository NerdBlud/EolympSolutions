#include<bits/stdc++.h>
using namespace std;
int main(){
       int a = -1 , b = -1  , c = -1;
       int count = 0;
       while(true){
              int n;
              cin>>n;
              count ++;
              
              a = b; // -1 3
              b = c; // 3 6
              c= n; // 3 6 5
              
              if( a != -1 and b == a+1 and c == b+1){
                     cout<<count;
                     break;
              }
       }
}