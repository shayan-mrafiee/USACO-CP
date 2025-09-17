//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<int> clocks;
//vector<vector<int>> adj;
//int n[2] = {}, num[2] = {};
//
//void dfs(int u, int p = -1, int i = 0) {
//    num[i]++;
//    n[i] += 12 - clocks[u];
//    
//    for (int v : adj[u]) {
//        if (v != p) dfs(v, u, (i+1) % 2);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("clocktree.in", "r", stdin);
//    freopen("clocktree.out", "w", stdout);
//    
//    int N; cin >> N;
//    clocks.resize(N);
//    adj.resize(N);
//    
//    for (int &i : clocks) cin >> i;
//    
//    for (int i = 1; i < N; i++) {
//        int a, b; cin >> a >> b;
//        adj[--a].push_back(--b);
//        adj[b].push_back(a);
//    }
//    
//    dfs(0);
//    
//    switch((n[0] - n[1]) % 12) {
//        case -1: case 11: cout << num[0] << "\n"; break;
//        case 0: cout << N << "\n"; break;
//        case 1: cout << num[1] << "\n"; break;
//        default: cout << "0\n";
//    }
//}
