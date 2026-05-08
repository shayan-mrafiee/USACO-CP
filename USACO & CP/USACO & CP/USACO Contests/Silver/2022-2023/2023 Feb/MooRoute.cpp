#include <bits/stdc++.h>

using namespace std; 
#define all(x) x.rbegin(), x.rend()

struct Flight {
    int r, d, s; 
    
    bool operator<(const Flight &other) const {
        return r < other.r; 
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); 

    int N, M; cin >> N >> M; 
    vector<vector<Flight>> adj(N); 
    vector<int> earliest_time(N, INT32_MAX), a(N); 

    while (M--) {
        int c, r, d, s;
        cin >> c >> r >> d >> s; 
        adj[--c].push_back({r, --d, s}); 
    }

    for (int i = 0; i < N; i++) {
        cin >> a[i]; 
        sort(all(adj[i])); // sort in reverse based on leave time 
    }

    earliest_time[0] = 0; 
    queue<Flight> q; 
    for (Flight f : adj[0]) q.push(f);

    vector<int> idx(N); 
    while (!q.empty()) {
        auto [r, d, s] = q.front(); q.pop(); 
        earliest_time[d] = min(earliest_time[d], s);
        while (idx[d] < adj[d].size() && s + a[d] <= adj[d][idx[d]].r) {
            q.push(adj[d][idx[d]++]);
        }
    }

    for (int &i : earliest_time) {
        cout << (i == INT32_MAX ? -1 : i) << "\n";
    }
}