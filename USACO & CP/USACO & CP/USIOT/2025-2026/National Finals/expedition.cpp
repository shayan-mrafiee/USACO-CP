#include <bits/stdc++.h>

using namespace std;
using ll = long long; 

vector<vector<int>> H; 
vector<vector<vector<bool>>> visited; 
int N, M, K, D; 
bool possible = false; 

void dfs(int i, int j, int K) {
    if (visited[i][j][K]) return;

    if (K < 0) {
        return; 
    }
    visited[i][j][K] = true; 
    if (i == N-1 && j == M-1) {
        possible = 1; 
        return; 
    }

    if (i+1 < N) {
        dfs(i+1, j, K - (abs(H[i+1][j] - H[i][j]) > D));
    }

    if (possible) return; 

    if (j+1 < M) {
        dfs(i, j+1, K - (abs(H[i][j+1] - H[i][j]) > D));
    }

    if (possible) return; 

    if (i) {
        dfs(i-1, j, K - (abs(H[i-1][j] - H[i][j]) > D));
    }

    if (possible) return; 

    if (j) {
        dfs(i, j-1, K - (abs(H[i][j-1] - H[i][j]) > D));
    }
}

int main() {
    cin >> N >> M >> K; 
    H = vector<vector<int>>(N, vector<int>(M));
    visited = vector<vector<vector<bool>>>(N, vector<vector<bool>>(M, vector<bool>(K+1)));

    for (vector<int> &v : H) {
        for (int &i : v)
            cin >> i; 
    }

    int lo = 0, hi = 1e6; 
    int ans = hi; 
    while (lo <= hi) {
        visited = vector<vector<vector<bool>>>(N, vector<vector<bool>>(M, vector<bool>(K+1)));
        D = lo + (hi - lo)/2; 
        possible = false; 
        dfs(0, 0, K);
        if (possible) {
            hi = D-1; 
            ans = D; 
        }
        else lo = D+1;
    }

    cout << ans << "\n";
}