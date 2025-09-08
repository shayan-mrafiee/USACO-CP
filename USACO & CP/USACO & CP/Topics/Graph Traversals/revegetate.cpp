//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//bool possible = true;
//vector<vector<pair<int, char>>> adj;
//vector<int> grass;
//int components = 0;
//
//void dfs(int u, int g = 1) {
//    grass[u] = g;
//    
//    for (auto [v, c] : adj[u]) {
//        if (!possible) return;
//        if (!grass[v]) {
//            if (c == 'S') dfs(v, g);
//            else dfs(v, (g == 1 ? 2 : 1));
//        }
//        else if ((c == 'S' && grass[v] != g) || (c == 'D' && grass[v] == g)) {
//            possible = false;
//        }
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
//    grass.resize(N);
//    adj.resize(N);
//    
//    while(M--) {
//        char c; int a, b;
//        cin >> c >> a >> b;
//        adj[--a].push_back({--b, c});
//        adj[b].push_back({a, c});
//    }
//    
//    for (int i = 0; i < N && possible; i++) {
//        if (!grass[i]) {
//            components++;
//            dfs(i);
//        }
//    }
//    
//    cout << possible;
//    while(components-- && possible) {
//        cout << 0; 
//    }
//}
