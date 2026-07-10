//https://codeforces.com/contest/25/problem/D
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<int> parent, sz; 

void make_set(int v) {
    parent[v] = v;
    sz[v] = 1; 
}

int find_set(int v) {
    if (parent[v] == v) return v; 
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a), b = find_set(b); 
    if (a == b) return; 

    if (sz[a] < sz[b])
        swap(a, b); 
    
    parent[b] = a; 
    sz[a] += sz[b];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n; 
    parent.resize(n), sz.resize(n);

    for (int i = 0; i < n; i++) make_set(i);

    vector<array<int, 4>> ans; 
    for (int i = 1; i < n; i++) {
        int a, b; cin >> a >> b; 
        a--, b--; 
        if (find_set(a) == find_set(b)) 
            ans.push_back({a+1, b+1, 0, 0});
        else
            union_sets(a, b);
    }

    int i = 0; 
    for (int u = 0; u < n-1; u++) {
        for (int v = u+1; v < n; v++) {
            if (find_set(u) != find_set(v)) {
                union_sets(u, v);
                tie(ans[i][2], ans[i][3]) = make_pair(u+1, v+1);
                i++;
            }
        }
    }

    cout << ans.size() << "\n"; 
    for (auto [i, j, u, v] : ans) {
        cout << i << ' ' << j << " " << u << " " << v << "\n";
    }
}