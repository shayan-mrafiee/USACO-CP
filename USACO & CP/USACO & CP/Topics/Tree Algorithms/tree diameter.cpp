//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<int>> adj;
//int b = 0, max_depth = 0;
//
//void dfs(int u, int parent, int depth) {
//    if (depth > max_depth) {
//        b = u;
//        max_depth = depth;
//    }
//    
//    for (int v : adj[u]) {
//        if (v != parent) dfs(v, u, depth+1);
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    adj.resize(n);
//    
//    for (int i = 0; i < n-1; i++) {
//        int a, b; cin >> a >> b;
//        adj[--a].push_back(--b);
//        adj[b].push_back(a);
//    }
//    
//    dfs(0, -1, 0);
//    max_depth = 0;
//    dfs(b, -1, 0);
//    
//    cout << max_depth << "\n";
//}
