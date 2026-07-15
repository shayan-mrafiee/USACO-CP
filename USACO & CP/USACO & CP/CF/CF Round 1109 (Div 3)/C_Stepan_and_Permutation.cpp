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
    a = find_set(a);
    b = find_set(b);

    if (a != b) {
        if (sz[a] < sz[b]) swap(a, b);
        parent[b] = a; 
        sz[a] += sz[b];
    }
}

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> p(n);
    parent = sz = vector<int>(n);

    for (int &i : p) {
        cin >> i;
        make_set(--i);
    }

    for (int i = 0; i + min(x, y) < n; i++) {
        if (i + x < n) 
            union_sets(i, i+x);
        if (i + y < n)
            union_sets(i, i+y);
    }

    for (int i = 0; i < n; i++) {
        if (find_set(i) != find_set(p[i])) {
            cout << "NO\n";
            return; 
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while(t--)
        solve();
}