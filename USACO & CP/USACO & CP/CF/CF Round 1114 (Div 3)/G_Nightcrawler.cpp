#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>;
using tiii = tuple<int, int, int>;
#define all(x) x.begin(), x.end()

const int INF = 2e9; 

vector<int> a;
vector<pii> range; 
vector<vector<int>> adj;
priority_queue<pii> pq ; // (depth, u)
int leaves = 0; 

void dfs(int u, int depth) {
    pq.push({depth, u});

    if (adj[u].empty()) {
        range[u].first = range[u].second = leaves++; 
        return; 
    }

    for (int v : adj[u]) {
        dfs(v, depth+1);
        range[u].first = min(range[u].first, range[v].first);
        range[u].second = max(range[u].second, range[v].second);
    }
}

vector<tiii> st; // (a[u], u, subset)

void build(int v = 0, int tl = 0, int tr = leaves-1) {
    if (tl == tr) {
        st[v] = {0, a.size(), tl};
        return; 
    }

    int tm = (tl + tr)/2; 
    build(2*v+1, tl, tm);
    build(2*v+2, tm+1, tr);
    st[v] = st[2*v+1];
}

void update(tiii val, int v = 0, int tl = 0, int tr = leaves-1) {
    if (tl == tr) {
        st[v] = max(st[v], val); 
        return; 
    }

    int tm = (tl + tr)/2; 
    int pos = get<2>(val);
    if (pos <= tm)
        update(val, 2*v+1, tl, tm);
    else
        update(val, 2*v+2, tm+1, tr);

    st[v] = min(st[2*v+1], st[2*v+2]);
}

tiii get_min(pii range, int v = 0, int tl = 0, int tr = leaves-1) {
    auto [l, r] = range; 
    if (tl > r || tr < l) return {INF, INF, INF}; 
    if (l <= tl && tr <= r) return st[v]; 

    int tm = (tl + tr)/2; 
    return min(get_min(range, 2*v+1, tl, tm), get_min(range, 2*v+2, tm+1, tr));
}

void solve() {
    int n; cin >> n; 
    range.assign(n, {INF, -INF});
    adj.assign(n, {});
    a.assign(n, 0);
    leaves = 0; 

    for (int &i : a) cin >> i; 
    for (int i = 1; i < n; i++) {
        int p; cin >> p;
        adj[--p].push_back(i);
    }

    dfs(0, 0);

    st.resize(4 * leaves); 
    build();
    vector<bool> is_max(n+1);

    while (!pq.empty()) {
        auto [_, u] = pq.top(); pq.pop(); 
        auto [a_v, v, subset] = get_min(range[u]);
        if (a[u] > a_v) {
            is_max[v] = false; 
            is_max[u] = true; 
            update({a[u], u, subset});
        }
    }

    priority_queue<pair<bool, int>> pq2; // (is_max[u], a[u])
    for (int u = 0; u < n; u++) {
        pq2.push({is_max[u], a[u]});
    }

    ll sum = 0;
    for (int k = 1; k <= n; k++) {
        sum += pq2.top().second; pq2.pop(); 

        if (k < leaves) cout << "-1" << " \n"[k == n]; 
        else {
            cout << sum << " \n"[k == n]; 
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}