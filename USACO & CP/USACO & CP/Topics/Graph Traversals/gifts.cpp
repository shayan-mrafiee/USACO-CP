//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<bool> visited;
//vector<vector<int>> adj[2];
//
//void dfs(int u, int i) {
//    visited[u] = true;
//    
//    for (int v : adj[i][u]) {
//        if (!visited[v]) dfs(v, i);
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    adj[0].resize(N); adj[1].resize(N);
//    
//    for (int i = 0; i < N; i++) {
//        bool add = true;
//        for (int j = 0; j < N; j++) {
//            int gift; cin >> gift;
//            if (--gift == i) add = false;
//            if(!add) continue;
//            adj[0][i].push_back(gift);
//            adj[1][gift].push_back(i);
//        }
//    }
//    
//    for (int i = 0; i < N; i++) {
//        int gift = i+1;
//        visited = vector<bool>(N);
//        dfs(i, 0);
//        vector<int> options;
//        for (int j : adj[0][i]) if (visited[j]) options.push_back(j);
//        
//        for (int j : options) {
//            visited = vector<bool>(N);
//            dfs(i, 1);
//            if (visited[j]) {
//                gift = j+1;
//                break;
//            }
//        }
//        
//        cout << gift << "\n";
//    }
//}
