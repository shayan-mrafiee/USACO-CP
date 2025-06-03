//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<vector<int>> neighbors;
//vector<bool> visited; 
//vector<bool> is_open;
//bool is_connected = true;
//int visitedBarns = 0;
//
//void dfs(int node) {
//    if (visited[node] || !is_open[node]) return;
//    visited[node] = true;
//    visitedBarns++;
//    for (int i : neighbors[node]) {
//        dfs(i);
//    }
//}
//
//int main() {
//    freopen("closing.in", "r", stdin);
//    freopen("closing.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    neighbors = vector<vector<int>>(N);
//    visited = vector<bool>(N, false);
//    is_open = vector<bool>(N, true);
//    
//    for (int i = 0; i < M; i++) {
//        int a, b; cin >> a >> b;
//        neighbors[a-1].push_back(b-1);
//        neighbors[b-1].push_back(a-1);
//    }
//    
//    dfs(0);
//    cout << ((visitedBarns == N) ? "YES" : "NO") << endl;
//    
//    for (int i = 1; i < N; i++) {
//        int close; cin >> close;
//        is_open[close-1] = false;
//        visitedBarns = 0;
//        visited = vector<bool>(N, false);
//        dfs(find(is_open.begin(), is_open.end(), true) - is_open.begin());
//        
//        cout << ((visitedBarns == N-i) ? "YES" : "NO") << endl; 
//    }
//}
