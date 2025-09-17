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
//    vector<pair<int, int>> posts(N);
//    map<int, vector<ll>> X, Y;
//    
//    for (auto &[x, y] : posts) cin >> x >> y;
//    
//    sort(all(posts));
//    for (auto &[x, y] : posts) {
//        Y[y].push_back(x);
//    }
//    
//    sort(all(posts), [](const auto &a, const auto &b) { return a.second < b.second; });
//    for (auto &[x, y] : posts) {
//        X[x].push_back(y);
//    }
//    
//    map<int, vector<ll>> prefix_X = X, prefix_Y = Y;
//    for (auto &[_, v] : prefix_X) {
//        for (int i = 1; i < v.size(); i++) v[i] += v[i-1];
//    }
//    for (auto &[_, v] : prefix_Y) {
//        for (int i = 1; i < v.size(); i++) v[i] += v[i-1];
//    }
//    
//    ll total_area = 0;
//    for (auto &[x, y] : posts) {
//        ll ix = lower_bound(all(X[x]), y) - X[x].begin(),
//        iy = lower_bound(all(Y[y]), x) - Y[y].begin(),
//        nx = X[x].size(), ny = Y[y].size(),
//        
//        distX = ix * y - (ix ? prefix_X[x][ix-1] : 0) + (prefix_X[x].back() - prefix_X[x][ix]) - (nx - ix - 1) * y,
//        distY = iy * x - (iy ? prefix_Y[y][iy-1] : 0) + (prefix_Y[y].back() - prefix_Y[y][iy]) - (ny - iy - 1) * x;
//        
//        total_area += distX * distY % MOD;
//    }
//    
//    cout << total_area % MOD << "\n";
//}
