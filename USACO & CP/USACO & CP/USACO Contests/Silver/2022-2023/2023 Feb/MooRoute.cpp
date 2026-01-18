//#include <bits/stdc++.h>
//
//using namespace std;
//
//struct Flight {
//    int r, d, s;
//    
//    bool operator<(const Flight &other) const {
//        return r < other.r;
//    }
//};
//
//int main() {
//    int N, M; cin >> N >> M;
//    vector<vector<Flight>> adj(N);
//    vector<int> a(N), earliest_time(N, INT32_MAX);
//    
//    while(M--) {
//        int c, r, d, s;
//        cin >> c >> r >> d >> s;
//        adj[--c].push_back({r, --d, s});
//    }
//    
//    for (vector<Flight> &v : adj) {
//        if (!v.empty()) sort(v.rbegin(), v.rend());
//    }
//    
//    for (int &i : a) cin >> i;
//    
//    queue<Flight> q;
//    vector<int> idx(N);
//    for (Flight f : adj[0]) q.push(f);
//    
//    earliest_time[0] = 0;
//    while (!q.empty()) {
//        auto [r, d, s] = q.front(); q.pop();
//        earliest_time[d] = min(earliest_time[d], s);
//        while (idx[d] < adj[d].size() && s + a[d] <= adj[d][idx[d]].r) {
//            q.push(adj[d][idx[d]++]);
//        }
//    }
//    
//    for (int &t : earliest_time) cout << (t == INT32_MAX ? -1 : t) << "\n";
//}
