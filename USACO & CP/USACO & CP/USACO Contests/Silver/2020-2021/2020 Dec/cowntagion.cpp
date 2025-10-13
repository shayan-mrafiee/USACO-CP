//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<int>> adj;
//int min_days = 0;
//
//void dfs(int u, int p) {
//    min_days += (int) ceil(log2(adj[u].size() + 1 - (u != 0)));
//    
//    for (int v : adj[u]) {
//        if (v == p) continue;
//        min_days++;
//        dfs(v, u);
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    adj.resize(N);
//    
//    for (int i = 1; i < N; i++) {
//        int a, b; cin >> a >> b;
//        adj[--a].push_back(--b);
//        adj[b].push_back(a);
//    }
//    
//    dfs(0, -1);
//    
//    cout << min_days << "\n";
//}
