//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<int> state;
//vector<vector<int>> adj;
//int ans;
//
//void dfs(int u) {
//    state[u] = 0;
//    bool b = 1;
//    for (int v : adj[u]) {
//        if (state[v] == -1) {
//            dfs(v);
//            b &= state[v];
//        }
//        else if (state[v] == 0) b = 0;
//    }
//    
//    state[u] = b;
//    ans -= state[u];
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("shuffle.in", "r", stdin);
//    freopen("shuffle.out", "w", stdout);
//    
//    int N; cin >> N;
//    ans = N;
//    state = vector<int>(N, -1);
//    adj.resize(N);
//    
//    for (int i = 0; i < N; i++) {
//        int a; cin >> a;
//        adj[--a].push_back(i);
//    }
//    
//    for (int i = 0; i < N; i++) {
//        if (state[i] == -1) dfs(i);
//    }
//    
//    cout << ans << "\n";
//}
