#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<vector<int>> board; 
map<array<int, 4>, int> state; 
int sz = 0;
vector<set<int>> neighbors; 
bool track_neighbors = true; 

void dfs(int i, int j, int id1, int id2 = -1) {
    state[{i, j, id1, id2}] = neighbors.size(); 
    sz++; 

    int di[] = {-1, 0, 1, 0};
    int dj[] = {0, -1, 0, 1};
    for (int k = 0; k < 4; k++) {
        int i2 = i + di[k], j2 = j + dj[k]; 
        if (i2 < 0 || j2 < 0 || i2 >= board.size() || j2 >= board.size()) continue; 
        if (!state[{i2, j2, id1, id2}] && (board[i2][j2] == id1 || board[i2][j2] == id2)) dfs(i2, j2, id1, id2);
        else if (track_neighbors && !state[{i2, j2, id1, id2}]) neighbors.back().insert(board[i2][j2]);
    }
}

int main() {
    freopen("multimoo.in", "r", stdin);
    freopen("multimoo.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N; 
    board = vector<vector<int>>(N, vector<int>(N)); 

    for (vector<int> &v : board) {
        for (int &i : v) cin >> i; 
    }

    // single cow
    int ans = 0; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!state[{i, j, board[i][j]}]) {
                sz = 0; 
                neighbors.push_back({}); 
                dfs(i, j, board[i][j]);
                ans = max(ans, sz);
            }
        }
    }
    cout << ans << "\n";

    // double cow
    track_neighbors = false; 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int n : neighbors[state[{i, j, board[i][j], -1}]-1]) {
                int id1 = min(board[i][j], n), id2 = max(board[i][j], n);
                if (!state[{i, j, id1, id2}]) {
                    sz = 0; 
                    dfs(i, j, id1, id2);
                    ans = max(ans, sz);
                }
            }
        }
    }

    cout << ans << "\n";
}