#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<vector<int>> adj; 
vector<int> grp; 
bool possible = true; 

void dfs(int u, int g) {
    if (grp[u]) {
        if (grp[u] != g) possible = false; 
        return; 
    }
    
    grp[u] = g; 
    
    for (int v : adj[u]) {
        if (!possible) return; 
        dfs(v, 2*g % 3);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m; 
    adj.resize(n);
    grp.resize(n);

    while (m--) {
        int a, b; cin >> a >> b; 
        adj[--a].push_back(--b);
        adj[b].push_back(a);
    }

    for (int u = 0; u < n && possible; u++) {
        if (!grp[u])
            dfs(u, 1);
    }

    if (!possible)
        return(cout << "IMPOSSIBLE\n", 0);
    for (int i : grp) 
        cout << i << " "; 
    cout << "\n";
}