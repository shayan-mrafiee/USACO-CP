#include <bits/stdc++.h>

using namespace std; 

int main() {
    int N; cin >> N; 
    map<int, set<int>> adj;  

    for (int i = 0; i < N; i++) {
        int id, a, b, c; 
        cin >> id >> a >> b >> c;
        adj[id].insert(a);
        adj[id].insert(b);
        adj[id].insert(c);
    }

    int ans = 0; 
    for (auto [id, s] : adj) {
        for (int i : s) {
            ans += adj[i].count(id) > 0; 
        }
    }

    cout << ans / 2 << '\n';
}

