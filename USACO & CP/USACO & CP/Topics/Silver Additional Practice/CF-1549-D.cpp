#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<vector<pair<int, bool>>> adj; 
vector<int> state; // -1 -> not visited, 0,1 -> visited 
int cnt[2] = {0, 0}; 
bool possible = true; 

void dfs(int u, bool c) {
    state[u] = c; 
    cnt[c]++; 

    for (auto [v, w] : adj[u]) {
        if (!possible) return;
        if (state[v] == -1) dfs(v, c ^ w);
        else if (state[v] != (c ^ w)) {
            possible = false; 
            return; 
        }
    }
}

void solve() {
    int n, m; cin >> n >> m; 
    adj.clear(); adj.resize(n);
    state = vector<int>(n, -1);
    possible = true; 

    while (m--) {
        int i, j; string c; 
        cin >> i >> j >> c; 
        bool w = c == "imposter";
        adj[--i].push_back({--j, w});
        adj[j].push_back({i, w});
    }

    int ans = 0; 
    for (int u = 0; u < n && possible; u++) {
        if (state[u] == -1) {
            cnt[0] = cnt[1] = 0; 
            dfs(u, 0);
            ans += max(cnt[0], cnt[1]);
        }
    }

    cout << (possible ? ans : -1) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}