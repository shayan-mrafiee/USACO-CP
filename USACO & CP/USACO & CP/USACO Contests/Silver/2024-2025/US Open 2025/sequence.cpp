#include <bits/stdc++.h>

using namespace std;
using ll = long long;  

void solve() {
    int M, K; cin >> M >> K; 
    vector<int> a, b; 
    ll sum = 0; 
    bool possible = true; 

    for (int i = 0; (1 << i) <= K; i++) {
        if (K & (1 << i)) {
            a.push_back((1 << (1 << i)) - 1); 
            sum += (1 << (1 << i)) - 1; 
            if (sum > M) {
                possible = false; 
                break; 
            }
        }
    }

    int d = M - sum; 
    if (d == 1) {
        if (!a.empty() && a[0] == 1) {
            a[0] = 2;
        }
        else {
            possible = false; 
        }
    }
    else if (d & 1) {
        b = {1, 2, (d-3)/2, (d-3)/2}; 
    }
    else {
        b = {d/2, d/2}; 
    }

    if (!possible) {
        cout << "-1\n";
        return; 
    }
    
    cout << a.size() + b.size() << "\n"; 
    for (int i : a) cout << i << " ";
    for (int i : b) cout << i << " ";
    cout << "\n";
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve(); 
    }
}