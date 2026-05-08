//https://cses.fi/problemset/task/1192
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<string> grid; 
vector<vector<bool>> state;
int n, m; 

void dfs(int i, int j) {
    state[i][j] = true; 

    if (i && !state[i-1][j] && grid[i-1][j] == '.') dfs(i-1, j);
    if (j && !state[i][j-1] && grid[i][j-1] == '.') dfs(i, j-1);
    if (i+1 < n && !state[i+1][j] && grid[i+1][j] == '.') dfs(i+1, j);
    if (j+1 < m && !state[i][j+1] && grid[i][j+1] == '.') dfs(i, j+1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m; 
    grid.resize(n); 
    state = vector<vector<bool>>(n, vector<bool>(m));

    for (string &s : grid) cin >> s; 

    int rooms = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!state[i][j] && grid[i][j] == '.') {
                dfs(i, j);
                rooms++; 
            }
        }
    }

    cout << rooms << "\n";
}