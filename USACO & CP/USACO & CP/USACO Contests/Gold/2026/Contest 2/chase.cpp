#include <bits/stdc++.h>
using namespace std;
using ll = long long; 
using pii = pair<int, int>; 

vector<vector<int>> a; // a[i][u] = 2^i th successor of u 
vector<ll> min_wait; // min dist from u to reach a free node (no farmer at u)
vector<bool> occupied; // true if there is a farmer at u

int succ(int x, ll n) {
    for (int i = 0; n; i++, n >>= 1) {
        if (n & 1)
            x = a[i][x]; 
    }
    return x;
}

vector<bool> visited;
void dfs(int u) {
    visited[u] = true; 

    if (!occupied[u]) {
        min_wait[u] = 0; 
        return; 
    }
    
    if (!visited[a[0][u]]) {
        dfs(a[0][u]);
    }
    min_wait[u] = min_wait[a[0][u]] + 1; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll N, F; cin >> N >> F; 
    ll k = N; 

    a.assign(63 - __builtin_clzll(k) + 1, vector<int>(N));
    min_wait.assign(N, k); 
    occupied.resize(N); visited.resize(N);

    for (int &u : a[0]) {
        cin >> u; 
        u--; 
    }

    for (int i = 1; i < a.size(); i++) {
        for (int u = 0; u < N; u++) {
            a[i][u] = a[i-1][a[i-1][u]];
        }
    }

    queue<pii> q; 
    for (int i = 0; i < F; i++) {
        int s; cin >> s; 
        q.emplace(--s, 0);
        occupied[succ(s, k)] = true; 
    }

    vector<int> max_wait(N, -2);
    while (!q.empty()) {
        auto [u, d] = q.front(); q.pop(); 
        if (max_wait[u] != -2) continue; 

        max_wait[u] = d-1; 
        q.emplace(a[0][u], d+1);
    }

    for (int u = 0; u < N; u++) {
        if (visited[u]) continue; 
        dfs(u);
    }

    for (int u = 0; u < N; u++) {
        if (max_wait[u] < 0) {
            cout << max_wait[u] << "\n"; 
        }
        else {
            int v = succ(u, k - max_wait[u]);
            cout << max(-1LL, 1LL * max_wait[u] - min_wait[v]) << "\n";
        }
    }
}