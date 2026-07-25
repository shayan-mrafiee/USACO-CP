#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<vector<int>> adj; 
vector<pair<int, int>> tree; 
bool possible = true; 

void dfs(int u) {
    vector<pair<int, int>> ranges; 
    for (int v : adj[u]) {
        if (!possible) return;
        if (!tree[v].first) dfs(v);

        ranges.push_back(tree[v]);
    }

    if (!possible) return;

    int sz = ranges.size(); 
    if (sz == 1) {
        tree[u] = ranges[0];
        return; 
    }

    int i = min_element(all(ranges)) - ranges.begin(); 
    for (int k = 0; k < sz-1; k++) {
        int next_i = (i+1) % sz; 
        if (ranges[next_i].first != ranges[i].second + 1) {
            possible = false;
            return; 
        }

        i = next_i;
    }

    tree[u] = {min_element(all(ranges))->first, max_element(all(ranges))->second};
}

void solve() {
    int n; cin >> n; 
    adj.clear(); adj.resize(n);
    tree.clear(); tree.resize(n);
    possible = true; 

    for (int i = 1; i < n; i++) {
        int p; cin >> p; 
        adj[--p].push_back(i);
    }

    for (auto &[a, b] : tree) {
        cin >> a; 
        b = a; 
    }

    dfs(0);

    cout << (possible ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}