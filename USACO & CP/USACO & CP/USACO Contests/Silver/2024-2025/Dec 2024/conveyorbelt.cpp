//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<vector<int>> grid;
//vector<vector<bool>> good;
//const char dirs[] = {'L', 'R', 'U', 'D'};
//const int dx[] = {0, 0, -1, 1};
//const int dy[] = {-1, 1, 0, 0};
//int goods = 0, N;
//
//bool is_inside(int x, int y) {
//    return x >= 0 && x < N && y >= 0 && y < N;
//}
//
//bool is_good(int x, int y) {
//    if (!is_inside(x, y)) return false; 
//    
//    for (int d = 0; d < 4; d++) {
//        if (grid[x][y] != -1 && grid[x][y] != d) continue;
//        
//        if (!is_inside(x + dx[d], y + dy[d]) || good[x + dx[d]][y + dy[d]]) return true;
//    }
//    return false;
//}
//
//void dfs(int x, int y) {
//    if (!is_good(x, y) || good[x][y]) return;
//    
//    good[x][y] = true;
//    goods++;
//    
//    for (int d = 0; d < 4; d++)
//        dfs(x + dx[d], y + dy[d]);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int Q; cin >> N >> Q;
//    vector<tuple<int, int, char>> queries(Q);
//    vector<int> answers(Q);
//    grid = vector<vector<int>>(N, vector<int>(N, -1));
//    good = vector<vector<bool>>(N, vector<bool>(N));
//    
//    for (auto &[x, y, c] : queries) {
//        cin >> x >> y >> c;
//        grid[--x][--y] = find(dirs, dirs+4, c) - dirs;
//    }
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            dfs(i, j);
//        }
//    }
//    
//    for (int i = Q-1; i >= 0; i--) {
//        answers[i] = N*N - goods;
//        
//        auto [x, y, _] = queries[i];
//        grid[x][y] = -1;
//        dfs(x, y);
//    }
//    
//    for (int ans : answers) cout << ans << "\n";
//}
