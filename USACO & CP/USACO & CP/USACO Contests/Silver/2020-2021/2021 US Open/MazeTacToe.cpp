//#include <bits/stdc++.h>
//
//using namespace std;
//
//bool visited[25][25][19683];
//set<int> winning_boards;
//char grid[25][25][3];
//int N;
//
//int pow3(int e) { return (int) pow(3, e); }
//
//bool is_winning(int state) {
//    int board[3][3];
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++, state /= 3) {
//            board[i][j] = state % 3;
//        }
//    }
//    
//    for (int i = 0; i < 3; i++) {
//        if (board[i][0] == 1 && board[i][1] == 2 && board[i][2] == 2) return true;
//        if (board[i][0] == 2 && board[i][1] == 2 && board[i][2] == 1) return true;
//        if (board[0][i] == 1 && board[1][i] == 2 && board[2][i] == 2) return true;
//        if (board[0][i] == 2 && board[1][i] == 2 && board[2][i] == 1) return true;
//    }
//    
//    if (board[0][0] == 1 && board[1][1] == 2 && board[2][2] == 2) return true;
//    if (board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 1) return true;
//    if (board[0][2] == 1 && board[1][1] == 2 && board[2][0] == 2) return true;
//    if (board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 1) return true;
//    
//    return false;
//}
//
//void dfs(int r, int c, int state = 0) {
//    visited[r][c][state] = true;
//    
//    if (grid[r][c][0] == 'M' || grid[r][c][0] == 'O') {
//        int i = grid[r][c][1] - '1', j = grid[r][c][2] - '1';
//        if (state / pow3(3*i + j) % 3 == 0) {
//            state += pow3(3*i + j) * (grid[r][c][0] == 'M' ? 1 : 2);
//            if (!visited[r][c][state] && is_winning(state)) {
//                winning_boards.insert(state);
//                return;
//            }
//            visited[r][c][state] = true;
//        }
//    }
//    
//    for (int i : {-1, 1}) {
//        if (r+i >= 0 && r+i < N && grid[r+i][c][0] != '#' && !visited[r+i][c][state]) dfs(r+i, c, state);
//        if (c+i >= 0 && c+i < N && grid[r][c+i][0] != '#' && !visited[r][c+i][state]) dfs(r, c+i, state);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    cin >> N;
//    int r, c;
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            for (int k = 0; k < 3; k++) cin >> grid[i][j][k];
//            if (grid[i][j][0] == 'B') r = i, c = j;
//        }
//    }
//    
//    dfs(r, c);
//    
//    cout << winning_boards.size() << "\n";
//}
