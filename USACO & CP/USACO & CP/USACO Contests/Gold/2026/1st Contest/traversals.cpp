#include <bits/stdc++.h>

using namespace std; 
#define all(x) x.begin(), x.end()

vector<int> parent, sz; 
vector<stack<int>> parties;

void make_set(int v) {
    parent[v] = v; 
    sz[v] = 1; 
}

int find_set(int v) {
    if (parent[v] == v) return v; 
    return parent[v] = find_set(parent[v]);
}

void add_party(int v, int night) {
    v = find_set(v); 
    parties[v].push(night);
}

void union_sets(int a, int b) { // adds a to b
    a = find_set(a); 
    b = find_set(b);

    if (a != b) {
        parent[a] = b; 
        sz[b] += sz[a];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N; cin >> N; 
    parent.resize(N); 
    sz.resize(N);
    vector<int> a(N);

    for (int &i : a) {
        cin >> i; 
        i--; 
    }

    int M; cin >> M; 
    vector<pair<int, char>> night(M);
    vector<stack<int>> parties(N);

    for (int i = 0; i < M; i++) {
        int c; char v; 
        cin >> c >> v; 
        night[i] = {--c, v};
        parties[c].push(i);
    }

    for (int i = 0; i < N; i++) {
        make_set(i); 
    }
    for (int i = 0; i < N; i++) {
        if (parties[i].empty()) {
            union_sets(i, a[i]);
        }
    }

    unordered_map<char, int> mp = {{'C', 0}, {'O', 1}, {'W', 2}};
    vector<array<int, 3>> ans(M, {0, 0, 0});

    for (int i = M-1; i >= 0; i--) {
        auto [c, v] = night[i];
        int type = mp[v]; 
        int s = sz[find_set(c)];
        ans[i][type] += s; 

        parties[c].pop(); 

        if (parties[c].empty()) {
            int c2 = find_set(a[c]);
            if (parties[c2].empty()) continue; 
            int j = parties[c2].top(); 
            type = mp[night[j].second];
            ans[i][type] -= s; 

            union_sets(c, c2);
        }
        else {
            int j = parties[c].top(); 
            type = mp[night[j].second];
            ans[i][type] -= s; 
        }
    }

    for (int i = 0; i < M; i++) {
        if (i) {
            for (int j = 0; j < 3; j++)
                ans[i][j] += ans[i-1][j];
        }

        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << "\n"; 
    }
}