//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//struct Query {
//    int r, c; char t;
//};
//int N;
//vector<vector<char>> grid;
//vector<vector<int>> state;
//vector<vector<bool>> unstable;
//int id = 1, ans = 0;
//
//void dfs(int r, int c, int sign = 1) {
//    state[r][c] = id;
//    
//    switch (grid[r][c]) {
//        case 'R':
//            if (r + sign >= N || r + sign < 0) return;
//            if (!state[r+sign][c]) dfs(r+sign, c, sign);
//            else if (state[r+sign][c] == state[r][c]) {
//                unstable[r][c] = true;
//                ans++;
//                return;
//            }
//            if (unstable[r+sign][c]) {
//                unstable[r][c] = true;
//                ans++;
//                return;
//            }
//            break;
//            
//        case 'L':
//            if (r - sign >= N || r - sign < 0) return;
//            if (!state[r-sign][c]) dfs(r-sign, c, sign);
//            else if (state[r-sign][c] == state[r][c]) {
//                unstable[r][c] = true;
//                ans++;
//                return;
//            }
//            if (unstable[r-sign][c]) {
//                unstable[r][c] = true;
//                ans++;
//                return;
//            }
//            break;
//            
//        case 'U':
//            if (c + sign >= N || c + sign < 0) return;
//            if (!state[r][c+sign]) dfs(r, c+sign, sign);
//            else if (state[r][c+sign] == state[r][c]) {
//                unstable[r][c] = true;
//                ans++;
//                return;
//            }
//            if (unstable[r][c+sign]) {
//                unstable[r][c] = true;
//                ans++;
//                return;
//            }
//            break;
//            
//        case 'D':
//            if (c - sign >= N || c - sign < 0) return;
//            if (!state[r][c-sign]) dfs(r, c-sign, sign);
//            else if (state[r][c-sign] == state[r][c]) {
//                unstable[r][c] = true;
//                ans++;
//                return;
//            }
//            if (unstable[r][c-sign]) {
//                unstable[r][c] = true;
//                ans++;
//                return;
//            }
//            break;
//            
//        default:
//            break;
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int Q; cin >> N >> Q;
//    vector<int> answers(Q);
//    vector<Query> queries(Q);
//    grid = vector<vector<char>>(N, vector<char>(N, ' '));
//    state = vector<vector<int>>(N, vector<int>(N));
//    unstable = vector<vector<bool>>(N, vector<bool>(N));
//    
//    for (auto &[r, c, t] : queries) {
//        cin >> r >> c >> t;
//        grid[--r][--c] = t;
//    }
//}
