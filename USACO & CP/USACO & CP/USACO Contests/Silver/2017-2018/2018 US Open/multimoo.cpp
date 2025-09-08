//#include <bits/stdc++.h>
//
//using namespace std;
//
//struct Node {
//    int i, j, c1, c2;
//    
//    Node(int i, int j, int c1, int c2) : i(i), j(j), c1(c1), c2(c2) {}
//    
//    bool operator<(const Node &other) const {
//        if (i != other.i) return i < other.i;
//        if (j != other.j) return j < other.j;
//        if (c1 != other.c1) return c1 < other.c1;
//        return c2 < other.c2;
//    }
//};
//
//vector<vector<int>> board;
//vector<set<int>> neighbors;
//map<Node, int> state;
//int N, visited = 0, c1, c2, component = 0;
//bool track_neighbors = true;
//
//void dfs(int i, int j) {
//    state[Node(i, j, c1, c2)] = component;
//    visited++;
//    
//    int d_i[] = {-1, 0, 1, 0}, d_j[] = {0, -1, 0, 1};
//    
//    for (int k = 0; k < 4; k++) {
//        if ((!i && k == 0) || (!j && k == 1) || (i >= N-1 && k == 2) || (j >= N-1 && k == 3)) continue;
//        if (!state[Node(i+d_i[k], j+d_j[k], c1, c2)] && (board[i + d_i[k]][j + d_j[k]] == c1 || board[i + d_i[k]][j + d_j[k]] == c2)) dfs(i + d_i[k], j + d_j[k]);
//        else if (track_neighbors && !state[Node(i+d_i[k], j+d_j[k], c1, c2)]) neighbors.back().insert(board[i+d_i[k]][j+d_j[k]]);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("multimoo.in", "r", stdin);
//    freopen("multimoo.out", "w", stdout);
//    
//    cin >> N;
//    board = vector<vector<int>>(N, vector<int>(N));
//    int single = 0, team = 0;
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> board[i][j];
//        }
//    }
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            c1 = c2 = board[i][j];
//            if (!state[Node(i, j, c1, c2)]) {
//                visited = 0;
//                component++;
//                neighbors.push_back({});
//                dfs(i, j);
//                
//                single = max(single, visited);
//            }
//        }
//    }
//    
//    track_neighbors = false;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            for (int n : neighbors[state[Node(i, j, board[i][j], board[i][j])]-1]) {
//                c1 = min(board[i][j], n);
//                c2 = max(board[i][j], n);
//                visited = 0;
//                component++;
//                if (!state[Node(i, j, c1, c2)]) dfs(i, j);
//                team = max(team, visited);
//            }
//        }
//    }
//    
//    cout << single << "\n" << team << "\n";
//}
