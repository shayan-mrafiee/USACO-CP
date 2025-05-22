#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M, Q; cin >> N >> M >> Q;
    
    vector<vector<int>> grid (N, vector<int>(M)),
    corners, horizontal, vertical;
    
    for (int i = 0; i < N; i++) {
        string s; cin >> s;
        for (int j = 0; j < M; j++) grid[i][j] = s[j] - '0';
    }
    
    corners = horizontal = vertical = grid;
    
}
