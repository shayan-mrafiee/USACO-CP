//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<pair<int, char>>> adj;
//vector<int> grass;
//int comp_num = 0;
//
//void dfs(int u, int g) {
//    grass[u] = g;
//    
//    for (auto &[v, c] : adj[u]) {
//        if (!comp_num) return;
//        if (grass[v] != -1) {
//            if ((c == 'S' && grass[v] != g) || (c == 'D' && grass[v] == g)) comp_num = 0;
//            continue; 
//        }
//        
//        dfs(v, (c == 'S' ? g : (g+1)%2));
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("revegetate.in", "r", stdin);
//    freopen("revegetate.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    adj.resize(N);
//    grass = vector<int>(N, -1);
//    
//    while(M--) {
//        char c; int a, b;
//        cin >> c >> a >> b;
//        adj[--a].push_back({--b, c});
//        adj[b].push_back({a, c});
//    }
//    
//    for (int i = 0; i < N; i++) {
//        if (grass[i] == -1) {
//            comp_num++;
//            dfs(i, 0);
//            if (!comp_num) break;
//        }
//    }
//    
//    cout << (comp_num ? 1 : 0);
//    while(comp_num--) cout << 0;
//    cout << "\n";
//}
