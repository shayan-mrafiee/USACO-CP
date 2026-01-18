#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> visited;
map<pair<int, int>, pair<int, int>> command;
vector<string> tac = {"...", "...", "..."}, t = tac;
int ans = 0, N;
bool possible = true;

bool has_moo(vector<string> &s) {
    for (int i = 0; i < 3; i++) {
        string res1, res2;
        for (int j = 0; j < 3; j++) {
            res1.push_back(s[i][j]);
            res2.push_back(s[j][i]);
        }
        
        if (res1 == "MOO" || res1 == "OOM") return true;
        if (res2 == "MOO" || res2 == "OOM") return true;
    }
    
    string res1, res2;
    for (int i = 0; i < 3; i++) {
        res1.push_back(s[i][i]);
        res2.push_back(s[i][2-i]);
    }
    
    if (res1 == "MOO" || res1 == "OOM") return true;
    if (res2 == "MOO" || res2 == "OOM") return true;
    
    return false;
}

void dfs(int r, int c) {
    visited[r][c] = true;
    
    if (grid[r][c] == 'M' || grid[r][c] == 'O') {
        pair<int, int> p = command[make_pair(r, c)];
        if (t[p.first][p.second] != grid[r][c]) return;
        if (tac[p.first][p.second] != '.') goto loop;
        tac[p.first][p.second] = grid[r][c];
        if (has_moo(tac)) return;
    }
    
    loop:
    for (int i : {-1, 1}) {
        if (r+i < N && r+i >= 0 && !visited[r+i][c] && grid[r+i][c] != '#') dfs(r+i, c);
        if (c+i < N && c+i >= 0 && !visited[r][c+i] && grid[r][c+i] != '#') dfs(r, c+i);
    }
}

int main() {
    cin >> N;
    grid = vector<vector<char>>(N, vector<char>(N));
    visited = vector<vector<bool>>(N, vector<bool>(N));
    
    pair<int, int> start;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char s[3];
            for (char &c : s) cin >> c; 
            if (s[0] == 'M' || s[0] == 'O')
                command[make_pair(i, j)] = {s[1]-'0'-1, s[2]-'0'-1};
            else if (s[0] == 'B') start = {i, j};
            grid[i][j] = s[0];
        }
    }
    
    char c[3] = {'.', 'M', 'O'};
    for (int i = 0; i < 19683; i++) {
        int x = i;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                t[j][k] = c[x % 3];
                x /= 3;
            }
        }
        
        if (has_moo(t)) {
            tac = {"...", "...", "..."};
            visited = vector<vector<bool>>(N, vector<bool>(N));
            dfs(start.first, start.second);
            ans += (t == tac);
        }
    }
    
    cout << ans << "\n";
}
