//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//using pii = pair<int, int>;
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n, m; cin >> n >> m;
//    vector<vector<int>> grid(n, vector<int>(m));
//    
//    for (vector<int> &row : grid) {
//        for (int &i : row) cin >> i;
//    }
//    
//    map<pii, pii> eastern, southern;
//    // eastern takes rows, southern takes columns
//    // (row/column, value) -> (indx in sorted, min x)
//    
//    for (int i = 0; i < n; i++) {
//        vector<int> v = grid[i];
//        sort(all(v));
//        v.erase(unique(all(v)), v.end());
//        for (int idx = 0; idx < v.size(); idx++) {
//            eastern[make_pair(i, v[idx])] = {idx, v.size()};
//        }
//    }
//    
//    for (int j = 0; j < m; j++) {
//        vector<int> v;
//        for (int i = 0; i < n; i++) v.push_back(grid[i][j]);
//        
//        sort(all(v));
//        v.erase(unique(all(v)), v.end());
//        for (int idx = 0; idx < v.size(); idx++) {
//            southern[make_pair(j, v[idx])] = {idx, v.size()};
//        }
//    }
//    
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            pii e = eastern[make_pair(i, grid[i][j])],
//            s = southern[make_pair(j, grid[i][j])];
//            int dif = abs(e.first - s.first);
//            (e.first < s.first ? e.second : s.second) += dif;
//            cout << max(e.second, s.second) << (j < m-1 ? " " : "");
//        }
//        cout << "\n";
//    }
//}
