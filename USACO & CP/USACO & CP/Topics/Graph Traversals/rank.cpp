//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//vector<bool> visited;
//vector<vector<int>> adj;
//int original;
//set<int> no_rank;
//
//void dfs(int player) {
//    if (player == original) {
//        no_rank.insert(player);
//        return;
//    }
//    
//    visited[player] = true;
//    for (int &i : adj[player]) if (!visited[i]) dfs(i);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, K; cin >> N >> K;
//    adj.resize(N);
//    
//    while(K--) {
//        int a, b, s_a, s_b;
//        cin >> a >> b >> s_a >> s_b;
//        if (s_a > s_b) adj[b-1].push_back(a-1);
//        else adj[a-1].push_back(b-1);
//    }
//    
//    for (int i = 0; i < N; i++) {
//        original = i;
//        visited = vector<bool>(N);
//        for (int j : adj[i]) dfs(j);
//    }
//    
//    cout << no_rank.size() << "\n";
//}
