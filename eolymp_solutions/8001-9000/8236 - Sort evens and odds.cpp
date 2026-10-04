#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n, int asc) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int ans = 0;
            
            if (asc == 1) {
                if (arr[j] > arr[j + 1]) {
                    ans = 1;
                }
            } else {
                if (arr[j] < arr[j + 1]) {
                    ans = 1;
                }
            }
            
            if (ans == 1) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    int odds[100000],evens[100000],odd_cnt = 0,even_cnt = 0;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        if (abs(num) % 2 == 1) {
            odds[odd_cnt] = num;
            odd_cnt = odd_cnt + 1;
        } else {
            evens[even_cnt] = num;
            even_cnt = even_cnt + 1;
        }
    }
    
    bubble_sort(odds, odd_cnt, 1);
    bubble_sort(evens, even_cnt, 0);
    
    for (int i = 0; i < odd_cnt; i++) {
        cout << odds[i] << " ";
    }
    
    for (int i = 0; i < even_cnt; i++) {
        cout << evens[i] << " ";
    }
    
    cout << "\n";
}