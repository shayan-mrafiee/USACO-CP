#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

// players of the same type say that the other is a 'crewmate' 
// players of different types say the other is an 'imposter' 
// crewmate -> make edge between i and j 
// imposter -> make edge between neg(i) and j, and neg(j) and i

vector<vector<int>> adj;
vector<int> comp; // 0 -> not visited

int node(int i, bool b) { return 2*i + b; } // b = false means negation

void make_edge(int node1, int node2) { // make an undirected edge between node1 and node2
    // both are 0-indexed
    adj[node1].push_back(node2);
    adj[node2].push_back(node1);
}

int id = 0;

void dfs(int u) {
    comp[u] = id; 

    for (int v : adj[u]) {
        if (!comp[v]) dfs(v);
    }
}

int solve() {
    int n, m; cin >> n >> m; 
    comp.clear(); comp.resize(2*n);
    adj.clear(); adj.resize(2*n);
    id = 0; 

    while (m--) {
        int i, j; string c;
        cin >> i >> j >> c; 
        i--; j--; 

        if (c == "crewmate") make_edge(node(i, true), node(j, true));
        else {
            make_edge(node(i, false), node(j, true));
            make_edge(node(i, true), node(j, false));
        }
    }

    for (int u = 0; u < 2*n; u++) {
        if (!comp[u]) {
            id++; 
            dfs(u);
        }
    }

    for (int u = 0; u < n; u++) {
        if (comp[node(u, 1)] && comp[node(u, 0)] && comp[node(u, 1)] == comp[node(u, 0)])
            return (cout << "-1\n", 0);
    }

    fill(all(comp), 0);
    id = 1; 
    for (int u = 0; u < n; u++) {
        if (comp[node(u, 1)] && comp[node(u, 0)]) continue; 
        if (!comp[node(u, 0)] && comp[node(u, 1)]) {
            id = -comp[node(u, 1)];
            dfs(node(u, 0));
        }
        else if (comp[node(u, 0)] && !comp[node(u, 1)]) {
            id = -comp[node(u, 0)];
            dfs(node(u, 1));
        }
        else {
            id = 1; 
            dfs(node(u, 0));
            id = -1; 
            dfs(node(u, 1));
        }
    }

    int ans = 0; 
    for (int u = 0; u < n; u++) {
        ans += comp[node(u, true)] > 0; 
    }

    cout << max(ans, n - ans) << "\n";
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}