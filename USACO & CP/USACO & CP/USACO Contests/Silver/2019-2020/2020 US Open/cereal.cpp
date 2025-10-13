//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Node {
//    int f, s;
//};
//
//vector<Node> nodes;
//vector<int> vis, ans;
//int i;
//
//void dfs(int n) {
//    if (n >= nodes.size()) return;
//    
//    if (vis[nodes[n].f] > n) {
//        int v = vis[nodes[n].f];
//        vis[nodes[n].f] = n;
//        dfs(v);
//    }
//    
//    else if (vis[nodes[n].s] > n) {
//        int v = vis[nodes[n].s];
//        vis[nodes[n].s] = n;
//        dfs(v);
//    }
//    
//    else {
//        ans[i]--;
//        return;
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("cereal.in", "r", stdin);
//    freopen("cereal.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    ans.resize(N);
//    nodes.resize(N);
//    vis = vector<int>(M, N);
//    
//    for (auto &[f, s] : nodes) {
//        cin >> f >> s;
//        f--; s--;
//    }
//    
//    for (i = N-1; i >= 0; i--) {
//        ans[i] = (i < N-1 ? ans[i+1] : 0) + 1;
//        
//        if (vis[nodes[i].f] != N) {
//            int v = vis[nodes[i].f];
//            vis[nodes[i].f] = i;
//            dfs(v);
//        } else vis[nodes[i].f] = i;
//    }
//    
//    for (int i : ans) cout << i << "\n";
//}
