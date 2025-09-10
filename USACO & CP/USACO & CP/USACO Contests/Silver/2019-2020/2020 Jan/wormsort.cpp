//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<pair<int, int>>> adj;
//vector<bool> visited;
//int min_w = -1;
//
//void dfs(int u) {
//    visited[u] = true;
//    
//    for (auto [v, w] : adj[u]) {
//        if (!visited[v] && w >= min_w) dfs(v);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("wormsort.in", "r", stdin);
//    freopen("wormsort.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    vector<int> destination(N);
//    adj.resize(N);
//    
//    for (int &i : destination) cin >> i;
//    
//    while(M--) {
//        int a, b, w; cin >> a >> b >> w;
//        adj[--a].push_back({--b, w});
//        adj[b].push_back({a, w});
//    }
//    
//    int lo = 1, hi = 2e9, ans = -1;
//    while(lo <= hi) {
//        min_w = lo + (hi - lo)/2;
//        
//        visited = vector<bool>(N);
//        bool possible = true;
//        for (int i = 0; i < N && possible; i++) {
//            if (visited[i] || destination[i] == i+1) continue;
//            dfs(destination[i]-1);
//            possible = visited[i];
//        }
//        
//        if (possible) {
//            lo = min_w+1;
//            ans = min_w;
//        }
//        else hi = min_w - 1;
//    }
//    
//    cout << ((ans == 2e9) ? -1 : ans) << '\n';
//}
