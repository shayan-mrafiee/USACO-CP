#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

const int MOD = 1e9 + 7;

vector<ll> ans; 
vector<vector<int>> adj; 

void dfs1(int u) {
    ans[u] = 1; 
    for (int v : adj[u]) {
        dfs1(v); 
        ans[u] += ans[v] + 1; 
        ans[u] %= MOD;
    }
    ans[u] = ans[u];
}

void dfs2(int u) {
    for (int v : adj[u]) {
        ans[v] += ans[u];
        ans[v] %= MOD; 
        dfs2(v);
    }
}

void solve() {
    int n; cin >> n; 
    ans = vector<ll>(n);
    adj.clear(); adj.resize(n);

    for (int i = 0; i < n; i++) {
        int l, r; cin >> l >> r; 
        if (l == 0) continue; 
        adj[i].push_back(--l);
        adj[i].push_back(--r);
    }

    dfs1(0); dfs2(0);
    
    for (int i : ans) cout << i << ' ';
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}