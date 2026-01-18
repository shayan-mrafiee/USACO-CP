//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//map<ll, vector<ll>> adj;
//map<ll, int> visited;
//// 0 -> not visited
//// 1 -> visited, reached bessie
//// -1 -> visited, didn't reach bessie
//ll bessie_time = 0;
//
//void dfs(ll u) {
//    visited[u] = -1;
//    if (u == bessie_time) {
//        visited[u] = 1;
//        return;
//    }
//    
//    for (ll v : adj[u]) {
//        if (!visited[v]) dfs(v);
//        visited[u] = visited[v];
//        if (visited[u] == 1) return;
//    }
//}
//
//int main() {
//    int N, K; cin >> N >> K;
//    vector<int> t(N);
//    
//    for (int &i : t) cin >> i;
//    
//    int cur_cow = 0;
//    priority_queue<ll, vector<ll>, greater<ll>> pq;
//    for (; cur_cow < K; cur_cow++) {
//        pq.push(t[cur_cow]);
//    }
//    
//    while (cur_cow < N) {
//        bessie_time = pq.top();
//        while (pq.top() == bessie_time && cur_cow < N) {
//            adj[pq.top()].push_back(bessie_time + t[cur_cow]);
//            pq.push(bessie_time + t[cur_cow++]);
//            pq.pop();
//        }
//    }
//    
//    cout << (bessie_time = pq.top()) << "\n";
//    for (int i = 0; i < K; i++) {
//        if (!visited[t[i]]) dfs(t[i]);
//        cout << (visited[t[i]] > 0);
//    }
//    cout << "\n";
//}
