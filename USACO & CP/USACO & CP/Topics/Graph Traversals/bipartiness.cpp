#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

set<pair<int, int>> added_edges;
vector<set<int>> adj;
vector<int> grp;

void dfs(int u, int g) {
    grp[u] = (g == 1) ? 2 : 1;
    
    for (int v : adj[u]) if (!grp[u]) dfs(u, grp[u]);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
    
    int n; cin >> n;
    adj.resize(n);
    grp.resize(n);
    
    for (int i = 0; i < n-1; i++) {
        int u, v; cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
}
