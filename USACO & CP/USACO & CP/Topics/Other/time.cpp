#include <bits/stdc++.h>
using namespace std; 
#define all(x) x.begin(), x.end()

int N, M, C, MAX_T; 
vector<int> m;
vector<vector<int>> adj, max_moonies; 
vector<vector<bool>> visited;

void bfs(int u, int t) {
    queue<pair<int, int>> q; // (u, t)
    q.push({u, t});

    while (!q.empty()) {
        auto [u, t] = q.front(); q.pop(); 
        if (visited[u][t]) continue; 
        visited[u][t] = true; 

        for (int v : adj[u]) {
            if (t+1 <= MAX_T && !visited[v][t+1]) {
                max_moonies[v][t+1] = max(max_moonies[v][t+1], max_moonies[u][t] + m[v]);
                q.push({v, t+1});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("time.in", "r", stdin);
    freopen("time.out", "w", stdout);

    cin >> N >> M >> C; 
    m.resize(N);
    adj.resize(N);

    for (int i = 0; i < N; i++) cin >> m[i]; 

    while (M--) {
        int a, b; cin >> a >> b;
        adj[--a].push_back(--b);
    }

    MAX_T = 1000;
    max_moonies = vector<vector<int>>(N, vector<int>(MAX_T + 1));
    visited = vector<vector<bool>>(N, vector<bool>(MAX_T + 1));

    bfs(0, 0);

    vector<int> f(MAX_T + 1);
    int ans = 0; 
    for (int i = 1; i <= MAX_T; i++) {
        auto [p, t] = make_pair(max_moonies[0][i], i);
        for (int j = t; j <= MAX_T; j++) {
            f[j] = max(f[j], f[j-t] + p);
            ans = max(ans, f[j] - j * j * C);
        }
    }

    cout << ans << "\n";
}