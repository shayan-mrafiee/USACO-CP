#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 

    if (n & 1) {
        cout << "1 1 "; 
        for (int i = 2; i <= n; i++) cout << i << " "; 
        cout << "1 "; 
        for (int i = 2; i <= n; i++) cout << i << ' ' << i << ' '; 
        for (int i = 1; i <= n; i++) cout << i << " \n"[i == n]; 
    }

    else {
        for (int i = 1; i <= n; i++) cout << i << " "; 
        for (int i = 1; i <= n; i++) cout << i << ' ' << i << " "; 
        for (int i = 1; i <= n; i++) cout << i << " \n"[i == n]; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}