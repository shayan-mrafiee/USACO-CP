//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<string> ice_cream;
//vector<vector<bool>> visited;
//int area = 0, perimeter = 0, N;
//
//void dfs(int i, int j) {
//    visited[i][j] = true;
//    area++;
//    
//    if (!i || ice_cream[i-1][j] == '.') perimeter++;
//    else if (!visited[i-1][j]) dfs(i-1, j);
//    
//    if (!j || ice_cream[i][j-1] == '.') perimeter++;
//    else if (!visited[i][j-1]) dfs(i, j-1);
//    
//    if (i >= N-1 || ice_cream[i+1][j] == '.') perimeter++;
//    else if (!visited[i+1][j]) dfs(i+1, j);
//    
//    if (j >= N-1 || ice_cream[i][j+1] == '.') perimeter++;
//    else if (!visited[i][j+1]) dfs(i, j+1);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("perimeter.in", "r", stdin);
//    freopen("perimeter.out", "w", stdout);
//    
//    int max_area = 0, best_perimeter = INT32_MAX;
//    cin >> N;
//    visited = vector<vector<bool>>(N, vector<bool>(N));
//    ice_cream.resize(N);
//    
//    for (string &s : ice_cream) cin >> s;
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            area = perimeter = 0;
//            if (!visited[i][j] && ice_cream[i][j] == '#') dfs(i, j);
//            if (area > max_area) {
//                max_area = area;
//                best_perimeter = perimeter;
//            }
//            else if (area == max_area) best_perimeter = min(best_perimeter, perimeter);
//        }
//    }
//    
//    cout << max_area << " " << best_perimeter << "\n";
//}
