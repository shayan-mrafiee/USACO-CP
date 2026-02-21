#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

// every two disconnected bipartite components of G can be connected 
// within a connected component, every two nodes with different colors can be connected 

vector<vector<int>> adj;
vector<int> state; // 0 -> unvisited, 1 or -1 -> visited 
bool is_bipartite = true; // for each component 
int nodes[] = {0, 0}, edges = 0; // for each component 

void dfs(int u, int c) {
    state[u] = c; 
    nodes[max(0, c)]++; 

    for (int v : adj[u]) {
        if (!is_bipartite) return; 
        if (!state[v]) dfs(v, -c);
        else if (state[v] != -c) {
            is_bipartite = false; 
            return; 
        }
        edges++; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M; cin >> N >> M;
    adj.resize(N);
    state.resize(N);

    while (M--) {
        int u, v; cin >> u >> v; 
        adj[--u].push_back(--v);
        adj[v].push_back(u);
    }

    vector<int> comp_nodes; 
    ll ans1 = 0; 
    for (int u = 0; u < N; u++) {
        if (!state[u]) {
            nodes[0] = nodes[1] = 0;
            edges = 0; 
            dfs(u, 1);

            if (!is_bipartite) {
                return (cout << "0\n", 0);
            }

            ans1 += 1LL * nodes[0] * nodes[1] - edges/2; 
            comp_nodes.push_back(nodes[0] + nodes[1]);
        }
    }

    ll ans2 = 0;
    for (int i : comp_nodes) {
        ans2 += 1LL * i * (N - i);
    }

    cout << ans1 + ans2/2 << "\n";
}