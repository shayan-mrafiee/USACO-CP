//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<string> game_grid;
//vector<vector<int>> component;
//int visited = 0, comp_num = 0, N, K;
//
//void dfs(int i, int j) {
//    component[i][j] = comp_num;
//    visited++;
//    
//    if (i && game_grid[i-1][j] == game_grid[i][j] && component[i-1][j] == -1) dfs(i-1, j);
//    if (j && game_grid[i][j-1] == game_grid[i][j] && component[i][j-1] == -1)
//        dfs(i, j-1);
//    if (i < N-1 && game_grid[i+1][j] == game_grid[i][j] && component[i+1][j] == -1) dfs(i+1, j);
//    if (j < 9 && game_grid[i][j+1] == game_grid[i][j] && component[i][j+1] == -1) dfs(i, j+1);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("mooyomooyo.in", "r", stdin);
//    freopen("mooyomooyo.out", "w", stdout);
//    
//    cin >> N >> K;
//    game_grid.resize(N);
//    component.resize(N);
//    
//    for (string &s : game_grid) cin >> s;
//    
//    bool cont = true;
//    while(cont) {
//        cont = false;
//        for (vector<int> &v : component) v = vector<int>(10, -1);
//        
//        set<int> erase_components;
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < 10; j++) {
//                visited = 0;
//                if (game_grid[i][j] != '0' && component[i][j] == -1) {
//                    dfs(i, j);
//                    if (visited >= K) erase_components.insert(comp_num);
//                    comp_num++;
//                }
//                cont |= (visited >= K);
//            }
//        }
//        
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < 10; j++) {
//                if (erase_components.count(component[i][j])) game_grid[i][j] = '0';
//            }
//        }
//        
//        for (int j = 0; j < 10; j++) {
//            int first_av = N-1;
//            for (int i = N-1; i >= 0; i--) {
//                if (game_grid[i][j] != '0') {
//                    if (i == first_av) first_av--;
//                    else {
//                        game_grid[first_av--][j] = game_grid[i][j];
//                        game_grid[i][j] = '0';
//                    }
//                }
//            }
//        }
//    }
//    
//    for (string &s : game_grid) cout << s << "\n";
//}
