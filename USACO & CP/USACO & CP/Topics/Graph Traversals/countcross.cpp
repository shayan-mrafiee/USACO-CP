#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;
#define all(x) x.begin(), x.end()

vector<vector<vector<pii>>> roads; 
vector<vector<bool>> state; 
int N;

void dfs(int r, int c) {
    state[r][c] = true; 

    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, -1, 0, 1};
    for (int i = 0; i < 4; i++) {
        if (r + dr[i] < 0 || r + dr[i] >= N) continue; 
        if (c + dc[i] < 0 || c + dc[i] >= N) continue; 
        if (!state[r + dr[i]][c + dc[i]] && !count(all(roads[r][c]), make_pair(r + dr[i], c + dc[i]))) {
            dfs(r + dr[i], c + dc[i]);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("countcross.in", "r", stdin);
    freopen("countcross.out", "w", stdout);

    int K, R; cin >> N >> K >> R;
    roads = vector<vector<vector<pii>>>(N, vector<vector<pii>>(N));

    while (R--) {
        int r1, c1, r2, c2; 
        cin >> r1 >> c1 >> r2 >> c2;
        roads[--r1][--c1].push_back({--r2, --c2});
        roads[r2][c2].push_back({r1, c1});
    }

    vector<pii> cows(K);
    for (auto &[r, c] : cows) {
        cin >> r >> c; 
        r--; c--;
    }

    int ans = 0; 
    for (auto [r, c] : cows) {
        state = vector<vector<bool>>(N, vector<bool>(N));
        dfs(r, c);
        for (auto [r2, c2] : cows) {
            ans += !state[r2][c2];
        }
    }

    cout << ans / 2 << "\n";
}