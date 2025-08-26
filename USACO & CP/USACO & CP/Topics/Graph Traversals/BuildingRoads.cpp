//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//vector<bool> visited;
//vector<vector<int>> neighbors;
//int visitedCities = 0;
//
//void dfs(int node) {
//    if (visited[node]) return;
//    visited[node] = true;
//    visitedCities++;
//    for (int i : neighbors[node]) {
//        dfs(i);
//    }
//}
//
//int main() {
//    int n, m; cin >> n >> m;
//    neighbors = vector<vector<int>>(n);
//    visited.resize(n);
//    vector<pair<int, int>> required;
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        cin >> a >> b;
//        neighbors[a-1].push_back(b-1);
//        neighbors[b-1].push_back(a-1);
//    }
//    
//    for (int i = 0; i < n && visitedCities < n; i++) {
//        dfs(i);
//        if (i < n-1 && !visited[i+1]) required.push_back({i+1, i+2});
//    }
//    
//    cout << required.size() << endl;
//    
//    for (pair<int, int> p : required) {
//        cout << p.first << " " << p.second << endl;
//    }
//}
