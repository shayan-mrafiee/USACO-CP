//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//struct Instruction {
//    int from, to; ll bales;
//};
//
//vector<vector<int>> adj;
//vector<ll> h, needs;
//vector<Instruction> instructions;
//ll avg;
//
//void dfs(int u, int p = 0) {
//    needs[u] = h[u] - avg;
//    
//    for (int v : adj[u]) {
//        if (v != p) {
//            dfs(v, u);
//            needs[u] += needs[v];
//        }
//    }
//}
//
//void orders(int u, int p = 0) {
//    for (int v : adj[u]) {
//        if (v == p) continue;
//        if (needs[v] >= 0) orders(v, u);
//        if (needs[v] > 0) instructions.push_back({v, u, needs[v]});
//    }
//    
//    for (int v : adj[u]) {
//        if (v != p && needs[v] < 0) {
//            instructions.push_back({u, v, -needs[v]});
//            orders(v, u);
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    adj.resize(N);
//    h.resize(N);
//    needs.resize(N);
//    
//    for (ll &j : h) {
//        cin >> j;
//        avg += j;
//    }
//    avg /= N;
//    
//    for (int i = 0; i < N-1; i++) {
//        int u, v; cin >> u >> v;
//        adj[--u].push_back(--v);
//        adj[v].push_back(u);
//    }
//    
//    dfs(0);
//    orders(0);
//    
//    cout << instructions.size() << "\n";
//    for (auto &[a, b, c] : instructions) cout << a+1 << ' ' << b+1 << " " << c << "\n";
//}
