//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//vector<vector<int>> neighbors;
//vector<bool> visited;
//int cast = 0;
//struct WT {
//    int x, y, p;
//};
//
//void dfs(int cow) {
//    if (visited[cow]) return;
//    cast++;
//    visited[cow] = true; 
//    for (int i : neighbors[cow]) {
//        dfs(i);
//    }
//}
//
//int main() {
//    freopen("moocast.in", "r", stdin);
//    freopen("moocast.out", "w", stdout); 
//    
//    int N, maxcast = 0; cin >> N;
//    neighbors = vector<vector<int>>(N);
//    vector<WT> cows (N);
//    for (WT &wt : cows)
//        cin >> wt.x >> wt.y >> wt.p;
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            if (i == j) continue;
//            
//            if (sqrt(pow(cows[i].x - cows[j].x, 2) + pow(cows[i].y - cows[j].y, 2)) <= cows[i].p) neighbors[i].push_back(j);
//        }
//    }
//    
//    for (int i = 0; i < N; i++) {
//        cast = 0;
//        visited = vector<bool>(N, false);
//        dfs(i);
//        maxcast = max(maxcast, cast);
//    }
//    
//    cout << maxcast << endl; 
//}
