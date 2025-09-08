//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<int> grp;
//int g1 = 0, g2 = 0;
//vector<vector<int>> adj;
//
//void dfs(int u, int g) {
//    grp[u] = g;
//    (g == 1 ? g1 : g2)++;
//    
//    for (int v : adj[u]) {
//        if (!grp[v]) dfs(v, (g == 1 ? 2 : 1));
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    adj.resize(n);
//    grp.resize(n);
//    
//    for (int i = 0; i < n-1; i++) {
//        int u, v; cin >> u >> v;
//        adj[--u].push_back(--v);
//        adj[v].push_back(u);
//    }
//    dfs(0, 1);
//    
//    cout << 1LL * g1 * g2 - n + 1 << "\n";
//}
