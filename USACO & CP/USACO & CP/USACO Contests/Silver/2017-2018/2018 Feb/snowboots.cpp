//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<int> snow;
//vector<pair<int, int>> boots;
//vector<vector<bool>> visited;
//int ans = -1;
//
//void dfs(int tile, int boot) {
//    visited[tile][boot] = true;
//    if (tile == snow.size()-1) {
//        ans = (ans == -1 ? boot : min(ans, boot));
//        return;
//    }
//    for (int i = boot; i < boots.size(); i++) {
//        if (boots[i].first < snow[tile]) continue;
//        for (int j = min(tile + boots[i].second, (int) snow.size()-1); j > tile; j--) {
//            if (boots[i].first >= snow[j] && !visited[j][i]) dfs(j, i);
//        }
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("snowboots.in", "r", stdin);
//    freopen("snowboots.out", "w", stdout);
//    
//    int N, B; cin >> N >> B;
//    snow.resize(N);
//    boots.resize(B);
//    visited = vector<vector<bool>>(N, vector<bool>(B));
//    
//    for (int &f : snow) cin >> f;
//    for (auto &[s, d] : boots) cin >> s >> d;
//    
//    dfs(0, 0);
//    
//    cout << ans << "\n";
//}
