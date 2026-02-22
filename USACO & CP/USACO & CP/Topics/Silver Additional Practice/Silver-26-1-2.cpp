#include <bits/stdc++.h>

using namespace std; 
using ll = long long; 
#define all(x) x.begin(), x.end()
#define impossible return(possible = false, 0)

vector<vector<pair<int, int>>> adj; 
vector<pair<int, ll>> nodes; // (sign, base)
vector<pair<ll, int>> ranges; 
vector<bool> visited; 
vector<int> l, r; 
bool is_fixed = false, possible = true; 
ll fixed_x = 0; 

int dfs(int u, pair<int, ll> info) {
    if (visited[u]) {
        if (nodes[u].first == info.first && nodes[u].second != info.second)
            impossible;
        if (nodes[u].first != info.first) {
            ll x = -(nodes[u].first * nodes[u].second + info.first * info.second);
            if (x & 1)
                impossible; 
            x /= 2; 

            if (is_fixed && x != fixed_x)
                impossible; 
            
            is_fixed = true; 
            fixed_x = x; 
        }
    }
    else {
        visited[u] = true; 
        nodes[u] = info;

        if (info.first == 1) {
            ranges.push_back({l[u] - info.second, 1});
            ranges.push_back({r[u] - info.second + 1, -1});
        }
        else {
            ranges.push_back({info.second - r[u], 1});
            ranges.push_back({info.second - l[u] + 1, -1});
        }
        
        for (auto [v, z] : adj[u]) {
            dfs(v, {-info.first, z - info.second});
        }
    }

    return 0; 
}

void initialize(int N) {
    adj.clear(); adj.resize(N);
    nodes.clear(); nodes.resize(N);
    visited.clear(); visited.resize(N);
    l.resize(N); r.resize(N);
    possible = true; 
}

void solve() {
    int N, M; cin >> N >> M; 
    initialize(N);
    int ans = 0;

    for (int &i : l) cin >> i; 
    for (int &i : r) cin >> i; 
    while (M--) {
        int x, y, z; cin >> x >> y >> z; 
        x--; y--; 
        adj[x].push_back({y, z});
        adj[y].push_back({x, z});
    }

    for (int u = 0; u < N && possible; u++) {
        if (visited[u]) continue; 
        is_fixed = false; 
        ranges.clear(); 
        dfs(u, {1, 0});

        if (is_fixed) {
            for (auto [x, y] : ranges) {
                if (x <= fixed_x) ans += y; 
            }
        }
        else {
            sort(all(ranges));
            int cur = 0, best = 0;
            for (auto [x, y] : ranges) {
                best = max(best, cur += y);
            }
            ans += best; 
        }
    }

    cout << (possible ? ans : -1) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; cin >> T; 
    while (T--) {
        solve(); 
    }
}