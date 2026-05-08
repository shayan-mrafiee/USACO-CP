// see Feb 2023 for a better solution, although this passes all test cases. 
#include <bits/stdc++.h>

using namespace std; 
#define all(x) x.rbegin(), x.rend()

struct Flight {
    int r, d, s; 
    
    bool operator<(const Flight &other) const {
        return r < other.r; 
    }
};

vector<vector<Flight>> adj; 
vector<int> a, earliest_time; 

void dfs(int u, int t) {
    earliest_time[u] = t; 

    for (auto [r, d, s] : adj[u]) {
        if (t + a[u] > r) return; 
        if (earliest_time[d] > s)
            dfs(d, s);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M; cin >> N >> M; 
    adj.resize(N);
    a.resize(N);
    earliest_time = vector<int>(N, INT32_MAX);

    while (M--) {
        int c, r, d, s; 
        cin >> c >> r >> d >> s; 
        adj[--c].push_back({r, --d, s});
    }

    for (int i = 0; i < N; i++) {
        cin >> a[i]; 
        sort(all(adj[i]));
    }

    dfs(0, -a[0]);
    earliest_time[0] = 0; 
    for (int i : earliest_time) {
        cout << (i == INT32_MAX ? -1 : i) << "\n";
    }
}