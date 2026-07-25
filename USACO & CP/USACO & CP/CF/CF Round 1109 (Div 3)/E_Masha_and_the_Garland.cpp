#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve() {
    int n, q; cin >> n >> q; 
    string s; cin >> s; 

    vector<int> p(n); 

    for (int i = 1; i < n; i++) {
        p[i] = p[i-1] + (s[i] == s[i-1]);
    }

    while (q--) {
        int l, r, k; cin >> l >> r >> k; 
        l--; r--;

        cout << ((p[r] - p[l] + 1)/2 <= k ? "YES\n" : "NO\n");
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}