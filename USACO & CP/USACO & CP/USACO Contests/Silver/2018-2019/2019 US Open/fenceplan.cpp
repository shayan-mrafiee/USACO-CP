//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define x first
//#define y second
//
//vector<vector<int>> adj;
//vector<pair<int, int>> location;
//vector<bool> visited;
//int min_x, min_y, max_x, max_y;
//
//void dfs(int u) {
//    visited[u] = true;
//    
//    min_x = min(min_x, location[u].x);
//    max_x = max(max_x, location[u].x);
//    min_y = min(min_y, location[u].y);
//    max_y = max(max_y, location[u].y);
//    
//    for (int v : adj[u]) {
//        if (!visited[v]) dfs(v);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("fenceplan.in", "r", stdin);
//    freopen("fenceplan.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    adj.resize(N);
//    location.resize(N);
//    visited.resize(N);
//    
//    for (auto &[x, y] : location) cin >> x >> y;
//    
//    while(M--) {
//        int a, b; cin >> a >> b;
//        adj[--a].push_back(--b);
//        adj[b].push_back(a);
//    }
//    
//    int min_perimeter = INT32_MAX;
//    for (int u = 0; u < N; u++) {
//        if (!visited[u]) {
//            min_x = min_y = INT32_MAX;
//            max_x = max_y = -1;
//            dfs(u);
//            
//            min_perimeter = min(min_perimeter, 2 * (max_x + max_y - min_x - min_y));
//        }
//    }
//    
//    cout << min_perimeter << "\n";
//}
