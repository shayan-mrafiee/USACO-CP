#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()
#define impossible return(possible = false, 0);

vector<vector<array<int, 2>>> adj;
vector<short> sign; 
vector<ll> base; 
vector<pair<ll, int>> ranges; 
vector<int> l, r; 
bool has_set_x = false, possible = true;
ll set_x = 0; 

int dfs(int u, short s, ll b) {
    if (!sign[u]) {
        sign[u] = s; base[u] = b; 
        for (auto [v, z] : adj[u]) {
            dfs(v, -s, z-b);
            if (!possible) return 0;
        }
    }
    else {
        if (sign[u] == s && base[u] != b)
            impossible; 
        if (sign[u] != s) {
            ll x = sign[u] * base[u] + s * b; 
            if (x & 1) impossible; 
            x /= -2; 
            if (has_set_x && x != set_x) impossible; 

            has_set_x = true; 
            set_x = x; 
        }
        return 0; 
    }

    if (s == -1) {
        ranges.push_back({b - r[u], 1});
        ranges.push_back({b - l[u] + 1, -1});
    }
    else {
        ranges.push_back({l[u] - b, 1});
        ranges.push_back({r[u] - b + 1, -1});
    }

    return 0;
}

void solve() {
    int N, M; cin >> N >> M; 
    adj.clear(); adj.resize(N);
    sign.clear(); sign.resize(N);
    base.clear(); base.resize(N);
    l.clear(); l.resize(N);
    r.clear(); r.resize(N);
    possible = true; 

    for (int &i : l) cin >> i;
    for (int &i : r) cin >> i;

    while (M--) {
        int x, y, z; cin >> x >> y >> z; 
        adj[--x].push_back({--y, z});
        adj[y].push_back({x, z});
    }

    int ans = 0; 
    for (int i = 0; i < N; i++) {
        if (sign[i]) continue; 
        has_set_x = false; 
        ranges.clear(); 
        dfs(i, 1, 0);
        if (!possible) break; 
        
        if (has_set_x) {
            for (auto [x, y] : ranges) {
                ans += (set_x >= x) * y; 
            }
        }
        else {
            int cur = 0, best = 0;
            sort(all(ranges));
            for (auto [_, y] : ranges) {
                best = max(best, cur += y);
            }
            ans += best; 
        }
    }

    cout << (possible ? ans : -1) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;
    while (T--)
        solve(); 
}