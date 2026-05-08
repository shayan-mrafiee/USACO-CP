#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>; 
#define all(x) x.begin(), x.end()

vector<vector<bool>> lit;
vector<vector<int>> state; 
vector<vector<vector<pii>>> switches; 
int ans = 1; 

void dfs(int i, int j) {
    state[i][j] = 1;

    for (auto [x, y] : switches[i][j]) {
        ans += !lit[x][y];
        lit[x][y] = true; 
    }

    int di[] = {-1, 0, 1, 0}, dj[] = {0, -1, 0, 1};
    for (int k = 0; k < 4; k++) {
        int i2 = i + di[k], j2 = j + dj[k];
        if (i2 < 0 || i2 >= lit.size() || j2 < 0 || j2 >= lit.size()) continue; 
        if (!state[i2][j2] && lit[i2][j2]) dfs(i2, j2);
    }
}

int main() {
    freopen("lightson.in", "r", stdin);
    freopen("lightson.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M; cin >> N >> M; 
    switches = vector<vector<vector<pii>>>(N, vector<vector<pii>>(N));
    lit = vector<vector<bool>>(N, vector<bool>(N));
    state = vector<vector<int>>(N, vector<int>(N));

    while (M--) {
        int x, y, a, b; 
        cin >> x >> y >> a >> b; 
        switches[--x][--y].push_back({--a, --b});
    }

    int prev_ans = 0; 
    lit[0][0] = true; 
    while (ans > prev_ans) {
        prev_ans = ans; 
        state = vector<vector<int>>(N, vector<int>(N));
        dfs(0, 0);
    }

    cout << ans << "\n";
}