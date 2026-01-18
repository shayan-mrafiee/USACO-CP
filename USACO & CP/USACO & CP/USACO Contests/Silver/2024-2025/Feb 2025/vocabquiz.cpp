//#include <bits/stdc++.h>
//
//using namespace std;
//#define all(x) x.begin(), x.end()
//
//vector<vector<int>> adj;
//vector<int> parent;
//vector<int> children;
//vector<int> dist;
//int M = 0;
//
//void dfs(int u, int d = 0) {
//    dist[u] = d;
//    if (adj[u].empty()) {
//        M++;
//    }
//    
//    for (int v : adj[u]) {
//        dfs(v, d+1);
//    }
//}
//
//int correct_dist(int u) {
//    if (parent[u] != -1 && children[parent[u]] == 1) {
//        dist[u] = correct_dist(parent[u]);
//    }
//    
//    return dist[u];
//}
//
//void update(int u) {
//    if (!children[u] && parent[u] != -1) {
//        children[parent[u]]--;
//        update(parent[u]);
//    }
//}
//
//int main() {
//    int N; cin >> N;
//    adj.resize(N+1);
//    parent.resize(N+1); parent[0] = -1;
//    dist.resize(N+1);
//    children.resize(N+1);
//    
//    for (int i = 1; i <= N; i++) {
//        int p; cin >> p;
//        adj[p].push_back(i);
//        children[p]++;
//        parent[i] = p;
//    }
//    
//    dfs(0);
//    
//    while (M--) {
//        int w; cin >> w;
//        cout << correct_dist(w) << "\n";
//        update(w);
//    }
//}
