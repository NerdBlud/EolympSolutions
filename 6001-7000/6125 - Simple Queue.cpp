#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    queue<int> q;
    string cmd;

    while (cin >> cmd) {
        if (cmd == "push") {
            int n;
            cin >> n;
            q.push(n);
            cout << "ok\n";
        } 
        else if (cmd == "pop") {
            cout << q.front() << "\n";
            q.pop();
        } 
        else if (cmd == "front") {
            cout << q.front() << "\n";
        } 
        else if (cmd == "size") {
            cout << q.size() << "\n";
        } 
        else if (cmd == "clear") {
            q = queue<int>();
            cout << "ok\n";
        } 
        else if (cmd == "exit") {
            cout << "bye\n";
            break;
        }
    }
}
