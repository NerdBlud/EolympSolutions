#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fflag ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MAX_N = 2e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
    
void countSort(int arr[], int n) {
	int max_val = *max_element(arr, arr+n);
	int count[max_val+1] = {};
	
	for(int i = 0; i < n; i++) {
		count[arr[i]]++;
	}
	
	int alirza = 0;
	for(int i = 0; i <= max_val; i++) { 
	   while(count[i] > 0) {
	   	arr[alirza]= i;
	    alirza++;
	    count[i]--;
	   }
	}
}

int main() {
    fflag
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
       cin >> arr[i];	
    }
    
    countSort(arr, n);
    
    for(int i = 0; i < n; i++) {
    	cout << arr[i] << " ";
    }
    
}
