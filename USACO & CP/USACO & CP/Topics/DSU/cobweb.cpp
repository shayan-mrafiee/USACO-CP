//https://acm.timus.ru/problem.aspx?space=1&num=1671
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

vector<int> parent, sz; 

void make_set(int v) {
    parent[v] = v; 
    sz[v] =  1; 
}

int find_set(int v) {
    if (v == parent[v]) return v;

    return parent[v] = find_set(parent[v]);
}

bool union_sets(int a, int b) {
    a = find_set(a), b = find_set(b); 
    if (a == b) return 0;  

    if (sz[a] < sz[b]) swap(a, b); 
    parent[b] = a; 
    sz[a] += sz[b];

    return 1; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M; cin >> N >> M; 
    parent.resize(N), sz.resize(N);
    vector<pair<int, int>> edges(M); 

    for (int i = 0; i < N; i++) make_set(i); 

    for (auto &[a, b] : edges) {
        cin >> a >> b; 
        a--, b--; 
    }

    int Q; cin >> Q; 
    vector<pair<int, int>> queries; // (query, query's #)
    vector<int> ans(Q); 
    for (int i = 0; i < Q; i++) {
        int x; cin >> x; 
        queries.push_back({--x, i});
    }

    sort(all(queries));

    for (int i = 0; i < M; i++) {
        auto [a, b] = edges[i];
        if (lower_bound(all(queries), make_pair(i, 0))->first != i) {
            union_sets(a, b); 
        }
    }

    for (int i = 0; i < N; i++) parent[i] = find_set(i); 

    sort(all(queries), [](const auto &a, const auto &b) { return a.second > b.second; }); // sort in reverse to process queries in reverse 
    int dif = set(all(parent)).size(); 
    for (auto [x, i] : queries) {
        ans[i] = dif;
        auto [a, b] = edges[x];
        dif -= union_sets(a, b);
    }

    for (int i : ans) cout << i << ' ';
    cout << "\n"; 
}