#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

struct Node {
    int a; 
    vector<ll> p; 
    Node() : p({0}) {}
};

int n; 
vector<Node> nodes; 
vector<vector<int>> adj; 

void dfs(int u, int p = -1) {
    for (int v : adj[u]) {
        if (v == p) continue; 
        dfs(v, u);
        nodes[u].p.push_back(nodes[v].p[nodes[v].p.size()-2] + nodes[u].p.back() + 1);
    }

    if (nodes[u].p.back() != n-1) nodes[u].p.push_back(n-1);
}

bool is_perfect_square(int n) {
    int s = sqrt(n) + 0.01; 
    return s*s == n; 
}

void solve() {
    cin >> n; 
    nodes.clear(); adj.clear(); 
    nodes.resize(n); adj.resize(n);

    for (auto &[i, _] : nodes) cin >> i; 

    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v; 
        adj[--u].push_back(--v);
        adj[v].push_back(u);
    }

    ll ans = 1; 
    for (int i = 1; i <= 3; i++)
        ans = (ans * (n-i+1)) / i; 

    dfs(0); 

    for (int u = 0; u < n; u++) {
        if (is_perfect_square(nodes[u].a)) continue; 
        vector<ll> &p = nodes[u].p; 
        for (int i = 1; i < p.size()-1; i++) {
            ans -= (p[i] - p[i-1]) * (p[i-1] + 1) * (p.back() - p[i]);
        }
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}