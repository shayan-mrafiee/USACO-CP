//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<bool> visited;
//
//void dfs(int u, vector<vector<int>> &adj) {
//    if (visited[u]) return;
//    visited[u] = true;
//    for (int v : adj[u]) dfs(v, adj);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n, m; cin >> n >> m;
//    visited.resize(n);
//    vector<vector<int>> adj[2];
//    adj[0].resize(n); adj[1].resize(n);
//    
//    while(m--) {
//        int a, b; cin >> a >> b;
//        adj[0][a-1].push_back(b-1);
//        adj[1][b-1].push_back(a-1);
//    }
//    
//    for (int k = 0; k < 2; k++) {
//        dfs(0, adj[k]);
//        for (int i = 0; i < n; i++) {
//            if (!visited[i]) {
//                cout << "NO\n";
//                if (k) cout << i+1 << " 1\n";
//                else cout << "1 " << i+1 << "\n";
//                return 0;
//            }
//            visited[i] = false;
//        }
//    }
//    
//    cout << "YES\n";
//}
