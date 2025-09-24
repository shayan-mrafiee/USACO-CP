//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<bool> visited;
//vector<pair<int, int>> particles;
//int N;
//
//void dfs(int u) {
//    visited[u] = true;
//    int xi = particles[u].first, yi = particles[u].second;
//    
//    for (int v = 0; v < N; v++) {
//        if (visited[v]) continue;
//        int &xj = particles[v].first, yj = particles[v].second;
//        if (((xi <= xj && yi <= yj) || (xj <= xi && yj <= yi))) dfs(v);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("moop.in", "r", stdin);
//    freopen("moop.out", "w", stdout);
//    
//    cin >> N;
//    particles.resize(N);
//    visited.resize(N);
//    
//    for (auto &[x, y] : particles) cin >> x >> y;
//    
//    int ans = 0;
//    for (int u = 0; u < N; u++) {
//        if (!visited[u]) {
//            ans++;
//            dfs(u);
//        }
//    }
//    
//    cout << ans << "\n";
//}
