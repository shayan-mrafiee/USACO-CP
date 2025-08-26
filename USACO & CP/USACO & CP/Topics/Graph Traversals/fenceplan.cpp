//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//#define x first
//#define y second
//
//int perimeter = 4e8;
//pair<int, int> lower_left = {1e8, 1e8}, upper_right = {-1, -1};
//vector<pair<int, int>> pos;
//vector<vector<int>> moo_connections;
//vector<bool> visited;
//
//void dfs(int cow) {
//    if (visited[cow]) return;
//    
//    visited[cow] = true;
//    lower_left = {min(lower_left.x, pos[cow].x), min(lower_left.y, pos[cow].y)};
//    upper_right = {max(upper_right.x, pos[cow].x), max(upper_right.y, pos[cow].y)};
//    for (int &i : moo_connections[cow]) dfs(i);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("fenceplan.in", "r", stdin);
//    freopen("fenceplan.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    pos.resize(N);
//    visited.resize(N);
//    moo_connections.resize(N);
//    
//    for (auto &[x, y] : pos) cin >> x >> y;
//    
//    while(M--) {
//        int a, b; cin >> a >> b;
//        moo_connections[a-1].push_back(b-1);
//        moo_connections[b-1].push_back(a-1);
//    }
//    
//    for (int i = 0; i < N; i++) {
//        if (visited[i]) continue;
//        lower_left = {1e8, 1e8}; upper_right = {-1, -1};
//        dfs(i);
//        int new_perimeter = 2 * (upper_right.x + upper_right.y - lower_left.x - lower_left.y);
//        perimeter = min(perimeter, new_perimeter);
//    }
//    
//    cout << perimeter << "\n";
//}
