//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<int>> adj, components;
//vector<pair<int, int>> component;
//
//void dfs(int u) {
//    component[u] = {components.size()-1, components.back().size()};
//    components.back().push_back(u);
//    
//    for (int v : adj[u]) {
//        if (component[v].first == -1) dfs(v);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("swap.in", "r", stdin);
//    freopen("swap.out", "w", stdout);
//    
//    int N, M, K; cin >> N >> M >> K;
//    vector<int> order(N);
//    adj.resize(N);
//    component.resize(N, {-1, -1});
//    
//    for (int i = 0; i < N; i++) order[i] = i;
//    
//    while(M--) {
//        int L, R; cin >> L >> R;
//        reverse(order.begin() + L-1, order.begin() + R);
//    }
//    
//    for (int i = 0; i < N; i++) {
//        adj[i].push_back(order[i]);
//    }
//    
//    for (int i = 0; i < N; i++) {
//        if (component[i].first == -1) {
//            components.push_back({});
//            dfs(i);
//        }
//    }
//    
//    for (int i = 0; i < N; i++) {
//        cout << (components[component[i].first][(component[i].second + K) % components[component[i].first].size()]) + 1 << "\n";
//    }
//}
