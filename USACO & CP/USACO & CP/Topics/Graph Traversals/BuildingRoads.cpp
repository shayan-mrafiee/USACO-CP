#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<vector<int>> adj; 
vector<vector<int>> comps; 
vector<bool> state; 

void dfs(int u) {
    state[u] = true; 
    comps.back().push_back(u);

    for (int v : adj[u]) {
        if (!state[v])
            dfs(v);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m; 
    adj.resize(n); 
    state.resize(n);
    
    while (m--) {
        int a, b; cin >> a >> b;
        adj[--a].push_back(--b);
        adj[b].push_back(a);
    }

    for (int u = 0; u < n; u++) {
        if (state[u]) continue;
        comps.push_back({});
        dfs(u);
    }

    cout << comps.size()-1 << "\n";
    for (int i = 0; i < comps.size()-1; i++) {
        cout << comps[i][0]+1 << ' ' << comps[i+1][0]+1 << "\n";
    }
}