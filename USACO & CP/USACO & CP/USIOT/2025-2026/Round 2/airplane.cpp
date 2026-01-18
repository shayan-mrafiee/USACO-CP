//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//vector<vector<unordered_set<ll>>> visited;
//vector<vector<bool>> obstacle;
//bool possible = false;
//int N, H;
//
//void dfs(int x, ll y, ll ver_speed) {
//    visited[x][y].insert(ver_speed);
//    
//    if (x >= N-1) {
//        possible = true;
//        return;
//    }
//    
//    for (int i = -1; i <= 1 && !possible; i++) {
//        if (y + ver_speed + i < H && y + ver_speed + i >= 0 && !obstacle[x+1][y + ver_speed + i] && !visited[x+1][y + ver_speed + i].count(ver_speed + i)) dfs(x+1, y + ver_speed + i, ver_speed + i);
//    }
//}
//
//void solve() {
//    int W;
//    cin >> N >> H >> W;
//    vector<int> X(W), S(W), E(W);
//    obstacle = vector<vector<bool>>(N+1, vector<bool>(H+1, false));
//    visited = vector<vector<unordered_set<ll>>>(N+1, vector<unordered_set<ll>>(H+1));
//    
//    
//    possible = false;
//    
//    for (int &i : X) cin >> i;
//    for (int &i : S) cin >> i;
//    for (int &i : E) cin >> i;
//    
//    for (int i = 0; i < W; i++) {
//        for (int j = 0; j < H; j++) {
//            if (j >= S[i] && j <= E[i]) continue;
//            obstacle[X[i]][j] = true;
//        }
//    }
//    
//    dfs(0, H/2, 0);
//    
//    cout << (possible ? "YES\n" : "NO\n");
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while (t--) {
//        solve();
//    }
//}
