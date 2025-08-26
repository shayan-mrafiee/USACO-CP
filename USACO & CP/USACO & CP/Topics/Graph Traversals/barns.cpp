//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<int>> adj, components;
//vector<int> component;
//
//void dfs(int u, int id) {
//    component[u] = id;
//    components.back().push_back(u);
//    
//    for (int v : adj[u]) {
//        if (component[v] == -1) dfs(v, id);
//    }
//}
//
//void solve() {
//    int N, M; cin >> N >> M;
//    component = vector<int>(N, -1);
//    adj = vector<vector<int>>(N);
//    components.resize(0);
//    
//    while(M--) {
//        int i, j; cin >> i >> j;
//        adj[i-1].push_back(j-1);
//        adj[j-1].push_back(i-1);
//    }
//    
//    for (int u = 0; u < N; u++) {
//        if (component[u] == -1) {
//            components.push_back({});
//            dfs(u, components.size()-1);
//            sort(all(components.back()));
//        }
//    }
//    
//    if (component.back() == 0) {
//        cout << "0\n";
//        return;
//    }
//    
//    vector<int> &start_comp = components[0], &end_comp = components[component.back()], dist1(components.size(), INT32_MAX), distN(components.size(), INT32_MAX);
//    
//    int a = 0;
//    for (int i = 0; i < N; i++) {
//        int dist = abs(start_comp[a] - i);
//        while(a < start_comp.size()-1 && abs(start_comp[a+1] - i) < dist) {
//            dist = abs(start_comp[++a] - i);
//        }
//        
//        dist1[component[i]] = min(dist1[component[i]], dist);
//    }
//    
//    a = 0;
//    for (int i = 0; i < N; i++) {
//        int dist = abs(end_comp[a] - i);
//        while(a < end_comp.size()-1 && abs(end_comp[a+1] - i) < dist) {
//            dist = abs(end_comp[++a] - i);
//        }
//        
//        distN[component[i]] = min(distN[component[i]], dist);
//    }
//    
//    ll cost = LLONG_MAX;
//    for (int i = 0; i < components.size(); i++) {
//        cost = min(cost, 1LL * dist1[i] * dist1[i] + 1LL * distN[i] * distN[i]);
//    }
//    
//    cout << cost << "\n";
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
