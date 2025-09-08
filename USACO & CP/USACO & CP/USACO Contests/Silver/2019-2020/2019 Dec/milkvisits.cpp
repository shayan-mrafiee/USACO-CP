//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<int>> adj;
//vector<int> component;
//string breed;
//int id = 0;
//
//void dfs(int u) {
//    component[u] = id;
//    
//    for (int v : adj[u]) {
//        if (component[v] || breed[v] != breed[u]) continue;
//        dfs(v);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("milkvisits.in", "r", stdin);
//    freopen("milkvisits.out", "w", stdout);
//    
//    int N, M; cin >> N >> M >> breed;
//    adj.resize(N);
//    component.resize(N);
//    
//    for (int i = 0; i < N-1; i++) {
//        int X, Y; cin >> X >> Y;
//        adj[--X].push_back(--Y);
//        adj[Y].push_back(X);
//    }
//    
//    for (int u = 0; u < N; u++) {
//        if (!component[u]) {
//            id++;
//            dfs(u);
//        }
//    }
//    
//    while(M--) {
//        int A, B; char C;
//        cin >> A >> B >> C;
//        
//        if (component[--A] != component[--B]) cout << 1;
//        else if (C == breed[A]) cout << 1;
//        else cout << 0;
//    }
//    
//    cout << "\n";
//}
