//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//const int MOD = 1e9 + 7;
//
//vector<int> color;
//vector<vector<int>> adj;
//
//void dfs(int u, int p = -1) {
//    set<int> available = {1, 2, 3};
//    
//    if (p != -1) available.erase(color[p]);
//    
//    for (int v : adj[u]) {
//        if (v == p) continue;
//        dfs(v, u);
//        available.erase(color[v]);
//    }
//    
//    if (available.size() == 1) color[u] = *available.begin();
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("barnpainting.in", "r", stdin);
//    freopen("barnpainting.out", "w", stdout);
//    
//    int N, K; cin >> N >> K;
//    adj.resize(N);
//    color.resize(N);
//    
//    for (int i = 1; i < N; i++) {
//        int x, y; cin >> x >> y;
//        adj[--x].push_back(--y);
//        adj[y].push_back(x);
//    }
//    
//    for (int i = 0; i < K; i++) {
//        int b, c; cin >> b >> c;
//        color[--b] = c;
//    }
//    
//    dfs(0);
//    dfs(0);
//    
//    int ans = (K ? 1 : 3);
//    for (int i = (K == 0); i < N; i++) {
//        if (color[i]) continue;
//        ans = ans * 2 % MOD;
//    }
//    
//    cout << ans << "\n";
//}
