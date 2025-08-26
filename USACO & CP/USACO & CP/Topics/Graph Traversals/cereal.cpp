//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Edge {
//    int cow, next;
//    bool next_next_is_first;
//};
//
//vector<bool> visited_cereal, visited_cycle, gets_cereal;
//vector<vector<Edge>> adj;
//vector<int> order;
//int first_cereal = -1, ignore_edge = -1;
//
//void find_cycle(int u, int parent = -1) {
//    visited_cycle[u] = true;
//    
//    for (auto &[cow, next, next_is_first] : adj[u]) {
//        if (!visited_cycle[next]) find_cycle(next, u);
//        else if (parent != next && first_cereal == -1) {
//            gets_cereal[cow] = true;
//            ignore_edge = cow;
//            first_cereal = (next_is_first) ? next : u;
//            order.push_back(cow);
//        }
//    }
//}
//
//void dfs(int u) {
//    visited_cereal[u] = true;
//    
//    for (auto &[cow, next, _] : adj[u]) {
//        if (!visited_cereal[next] && ignore_edge != cow) {
//            gets_cereal[cow] = true;
//            order.push_back(cow);
//            dfs(next);
//        }
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, M; cin >> N >> M;
//    gets_cereal.resize(N);
//    visited_cereal.resize(M);
//    visited_cycle.resize(M);
//    adj.resize(M);
//    vector<pair<int, int>> favorites(N);
//    
//    for (int i = 0; i < N; i++) {
//        int f, s; cin >> f >> s;
//        adj[--f].push_back({i, --s, false});
//        adj[s].push_back({i, f, true});
//    }
//    
//    for (int i = 0; i < M; i++) {
//        if (visited_cereal[i]) continue;
//        first_cereal = ignore_edge = -1;
//        find_cycle(i);
//        dfs((first_cereal == -1 ? i : first_cereal));
//    }
//    
//    int hungry = 0;
//    for (int i = 0; i < N; i++) {
//        if (!gets_cereal[i]) {
//            hungry++;
//            order.push_back(i);
//        }
//    }
//    
//    cout << hungry << "\n";
//    for (int i : order) cout << i+1 << "\n";
//}
