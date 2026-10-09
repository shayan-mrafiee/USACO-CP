#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n; cin >> n; 
    int a[2] = {}, b[2] = {};

    for (int i = 0; i < n; i++) {
        char c; cin >> c; 
        a[i & 1] += c == '1';
    }
    for (int i = 0; i < n; i++) {
        char c; cin >> c; 
        b[i & 1] += c == '1';
    }

    cout << (a[0] == b[0] && a[1] == b[1] ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}