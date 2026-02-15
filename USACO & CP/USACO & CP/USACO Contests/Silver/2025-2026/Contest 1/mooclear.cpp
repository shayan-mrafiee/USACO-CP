#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

vector<vector<pair<int, int>>> adj; 
vector<pair<int, ll>> nodes; // (sign, base)
// a_i = s_i * X + b_i
// s_i = sign
// b_i = base 
vector<bool> visited; 
vector<int> l, r; 
vector<pair<ll, ll>> ranges; 
bool possible = true; 
bool is_fixed = false;
ll fixed_x; 

void dfs(int u, pair<int, ll> node) {
    if (visited[u]) {
        if (nodes[u].first == node.first && nodes[u].second != node.second) {
            possible = false; 
            return; 
        }
        if (nodes[u].first != node.first) {
            ll x = -(nodes[u].first * nodes[u].second + node.first * node.second);
            if (x & 1) {
                possible = false;
                return; 
            }
            x /= 2; 
            if (is_fixed && x != fixed_x) {
                possible = false;
                return; 
            }
            else {
                is_fixed = true; 
                fixed_x = x; 
            }
        }
    }
    else {
        if (node.first == 1) {
            ranges.push_back({l[u] - node.second, 1});
            ranges.push_back({1 + r[u] - node.second, -1});
        }
        else {
            ranges.push_back({node.second - r[u], 1});
            ranges.push_back({1 + node.second - l[u], -1});
        }
        visited[u] = true; 
        nodes[u] = node; 
        for (auto [v, z] : adj[u]) {
            dfs(v, {-node.first, z - node.second});
        }
    }
}

void solve() {
    int N, M; cin >> N >> M;
    adj.clear(); adj.resize(N);
    nodes.clear(); nodes.resize(N); 
    visited.clear(); visited.resize(N);
    l.resize(N); r.resize(N);
    possible = true; 

    for (int& i : l) cin >> i; 
    for (int& i : r) cin >> i; 
    while (M--)
    {
        int x, y, z; cin >> x >> y >> z; 
        adj[--x].push_back({--y, z}); 
        adj[y].push_back({x, z});
    }

    int ans = 0; 
    for (int i = 0; i < N && possible; i++) {
        if (visited[i]) continue; 
        is_fixed = false; 
        ranges.clear();
        dfs(i, {1, 0});

        if (is_fixed) for (auto [x, y] : ranges) {
            if (x <= fixed_x) ans += y; 
        }
        else {
            int cur = 0, best = 0; 
            sort(ranges.begin(), ranges.end());
            for (auto [x, y] : ranges) {
                best = max(best, cur += y);
            }
            ans += best; 
        }
    }

    if (possible) {
        cout << ans << "\n";
    }
    else {
        cout << "-1\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T; 
    while (T--)
    {
        solve(); 
    }
}