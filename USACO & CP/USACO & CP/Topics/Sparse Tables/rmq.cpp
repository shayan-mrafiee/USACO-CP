#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

int lg(int num) { return 31 - __builtin_clz(num); }

void solve() {
    int n; cin >> n; 
    const int K = lg(n) + 1; 
    vector<vector<int>> st(K, vector<int>(n));

    for (int &i : st[0]) cin >> i; 

    for (int k = 1; k <= K; k++) {
        for (int i = 0; i + (1 << k) <= n; i++) {
            st[k][i] = min(st[k-1][i], st[k-1][i + (1 << (k-1))]);
        }
    }

    int q; cin >> q; 
    while (q--) {
        int l, r; cin >> l >> r; 
        int k = lg(r - l + 1); 
        cout << min(st[k][l], st[k][r - (1 << k) + 1]) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}