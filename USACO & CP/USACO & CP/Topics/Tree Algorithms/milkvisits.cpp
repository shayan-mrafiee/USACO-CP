//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//const int G = 0, H = 1;
//string breed;
//vector<vector<int>> adj;
//vector<int> component;
//int id = 0;
//
//void dfs(int u, int parent) {
//    component[u] = id;
//    
//    for (int v : adj[u]) {
//        if (v != parent && breed[v] == breed[u]) dfs(v, u);
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
//    for (int i = 0; i < N; i++) {
//        if (!component[i]) {
//            id++;
//            dfs(i, -1);
//        }
//    }
//    
//    while(M--) {
//        int A, B; char C;
//        cin >> A >> B >> C;
//        
//        cout << (component[--A] != component[--B] || breed[A] == C || breed[B] == C); 
//    }
//}
