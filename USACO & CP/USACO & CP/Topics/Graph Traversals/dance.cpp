//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<bool> visited;
//vector<vector<int>> adj;
//int comp_num = 0;
//
//void dfs(int u) {
//    visited[u] = comp_num;
//    
//    for (int v : adj[u]) {
//        if (!visited[v]) dfs(v);
//    }
//}
//
//void solve() {
//    int n; cin >> n;
//    comp_num = 0;
//    visited = vector<bool>(n);
//    adj = vector<vector<int>>(n);
//    
//    for (int i = 0; i < n; i++) {
//        int a; cin >> a;
//        a--; 
//        if (!count(all(adj[a]), i)) {
//            adj[a].push_back(i);
//            adj[i].push_back(a);
//        }
//    }
//    
//    int joints = 0;
//    for (int i = 0; i < n; i++) {
//        joints += adj[i].size() == 1;
//        if (!visited[i]) {
//            comp_num++;
//            dfs(i);
//        }
//    }
//    
//    cout << comp_num - max(joints-2, 0)/2 << " " << comp_num << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
