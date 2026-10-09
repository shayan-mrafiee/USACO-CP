#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, M; cin >> N >> M;
    vector<set<pair<char, int>>> adj(N);
    vector<int> f(N, -1);

    while (M--) {
        int u, v; char c; 
        cin >> u >> v >> c; 
        adj[--u].emplace(c, --v); 
        adj[v].emplace(c, u);
    }

    f[0] = 0; 
    set<tuple<char, int, int>> paths; // (c, d, v)

    char prev_c = CHAR_MAX; 
    for (auto [c, v] : adj[0]) {
        if (c > prev_c) break;
        prev_c = c; 
        if (v == 0) continue;  
        paths.emplace(prev_c = c, 1, v);
    }

    set<tuple<char, int, int>> new_paths; 
    while (!paths.empty()) {
        new_paths = {};
        for (auto [prev_c, d, u] : paths) { 
            if (f[u] != -1) continue; 
            f[u] = d; 
            for (auto [c, v] : adj[u]) {
                if (c > prev_c) break; 
                prev_c = c; 
                if (f[v] != -1) continue; 
                new_paths.emplace(c, d+1, v);
            }
        }

        paths = {};
        prev_c = CHAR_MAX; 
        for (auto [c, d, u] : new_paths) {
            if (c > prev_c) break; 
            prev_c = c; 
            paths.emplace(c, d, u);
        }
    }

    for (int i = 0; i < N; i++) {
        cout << f[i] << " \n"[i == N-1];
    }
}

int main() {
    int T; cin >> T;
    while (T--) {
        solve(); 
    }
}