//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//const int MOD = 1e9 + 7;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("triangles.in", "r", stdin);
//    freopen("triangles.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<pair<int, int>> pastures(N);
//    map<int, vector<int>> row, column;
//    
//    for (auto &[x, y] : pastures) {
//        cin >> x >> y;
//        row[y].push_back(x);
//        column[x].push_back(y);
//    }
//    
//    map<int, vector<int>> prefixRow, prefixColumn;
//    for (auto &[y, v] : row) {
//        sort(all(v));
//        prefixRow[y] = v;
//        for (int i = 1; i < v.size(); i++) prefixRow[y][i] += prefixRow[y][i-1];
//    }
//    for (auto &[x, v] : column) {
//        sort(all(v));
//        prefixColumn[x] = v;
//        for (int i = 1; i < v.size(); i++) prefixColumn[x][i] += prefixColumn[x][i-1];
//    }
//    
//    ll total_area = 0;
//    
//    for (auto &[x, y] : pastures) {
//        int ix = lower_bound(all(row[y]), x) - row[y].begin(),
//        iy = lower_bound(all(column[x]), y) - column[x].begin(),
//        nx = row[y].size(), ny = column[x].size();
//        
//        ll x_dif = 1LL * ix * row[y][ix] - (ix ? prefixRow[y][ix-1] : 0);
//        x_dif += prefixRow[y].back() - prefixRow[y][ix] - 1LL * (nx - ix - 1) * row[y][ix];
//        
//        ll y_dif = 1LL * iy * column[x][iy] - (iy ? prefixColumn[x][iy-1] : 0);
//        y_dif += prefixColumn[x].back() - prefixColumn[x][iy] - 1LL * (ny - iy - 1) * column[x][iy];
//        
//        total_area = (total_area + x_dif * y_dif % MOD) % MOD;
//    }
//    
//    cout << total_area << "\n";
//}
