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

void merge(vi& v1, vi& v2, int l, int mid, int r) {
	vi ans1;
	vi ans2;
	
	int i = l; int j = mid + 1;
	
	while(i <= mid and j <= r) {
		if(v1[i] <= v1[j]) {
			ans1.push_back(v1[i]);
			ans2.push_back(v2[i]);
			i++;
		}else {
			ans1.push_back(v1[j]);
			ans2.push_back(v2[j]);
			j++;
		}
	}
	
	while(i <= mid){
		ans1.push_back(v1[i]);
		ans2.push_back(v2[i]);
		i++;
	} 
	while(j <= r) {
		ans1.push_back(v1[j]);
		ans2.push_back(v2[j]);
		j++;
	}
	
	for(int i = 0 ; i < ans1.size(); i++) {
		v1[l + i] = ans1[i];
		v2[l + i] = ans2[i];
	}
}

void mergesort(vi& v1, vi& v2, int l, int r) {
	if(l >= r) {
		return;
	}
	
	int mid = (l+r)/2;
	mergesort(v1, v2, l, mid);
	mergesort(v1, v2, mid+1 , r);
	
	merge(v1, v2, l, mid, r);
}

int main() {
    makemycodefaster
    
    int n;
    cin >> n;
    
    vi v1(n);
    vi v2(n);
    
    for(int i = 0; i < n; i++) {
    	cin >> v1[i] >> v2[i];
    }
    
    mergesort(v1,v2, 0, n-1);
    
    for(int i = 0; i < n; i++) {
    	cout << v1[i] << " " << v2[i] << "\n";
    }
}

