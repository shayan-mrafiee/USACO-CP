//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<bool> visited;
//vector<vector<pair<int, int>>> adj;
//
//void dfs(int u, int k) {
//    visited[u] = true;
//    
//    for (auto &[v, r] : adj[u]) {
//        if (!visited[v] && r >= k) dfs(v, k);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("mootube.in", "r", stdin);
//    freopen("mootube.out", "w", stdout);
//    
//    int N, Q; cin >> N >> Q;
//    adj.resize(N);
//    
//    for (int i = 0; i < N-1; i++) {
//        int p, q, r; cin >> p >> q >> r;
//        adj[--p].push_back({--q, r});
//        adj[q].push_back({p, r});
//    }
//    
//    while(Q--) {
//        int k, v; cin >> k >> v;
//        visited = vector<bool>(N);
//        dfs(v-1, k);
//        
//        cout << count(all(visited), true)-1 << "\n";
//    }
//}
