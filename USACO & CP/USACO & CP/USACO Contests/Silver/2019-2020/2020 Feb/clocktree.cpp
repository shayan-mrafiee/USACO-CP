//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<int>> adj;
//int N, twelve;
//vector<int> clocks;
//bool impossible = false;
//
//void dfs(int u, int parent) {
//    clocks[u]++;
//    twelve += (clocks[u] == 12);
//
//    for (int v : adj[u]) {
//        if (v != parent && clocks[v] < 12) {
//            dfs(v, u);
//            if (twelve == N) return;
//            clocks[u]++;
//            twelve += (clocks[u] == 12);
//            if (twelve == N) return;
//            if (clocks[u] > 12) {
//                impossible = true;
//                return;
//            }
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("clocktree.in", "r", stdin);
//    freopen("clocktree.out", "w", stdout);
//    
//    cin >> N;
//    adj.resize(N);
//    vector<int> original_clocks(N);
//    int already_twelve = 0;
//    
//    for (int &i : original_clocks) {
//        cin >> i;
//        already_twelve += (i == 12);
//    }
//    
//    for (int i = 1; i < N; i++) {
//        int a, b; cin >> a >> b;
//        adj[--a].push_back(--b);
//        adj[b].push_back(a);
//    }
//    
//    int ans = N;
//    for (int i = 0; i < N; i++) {
//        clocks = original_clocks;
//        twelve = already_twelve;
//        impossible = false;
//        while(twelve != N && !impossible) {
//            clocks[i]--;
//            dfs(i, -1);
//        }
//        ans -= impossible;
//    }
//    
//    cout << ans << "\n";
//}
