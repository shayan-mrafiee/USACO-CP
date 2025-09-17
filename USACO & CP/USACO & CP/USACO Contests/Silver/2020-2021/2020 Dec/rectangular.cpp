//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    vector<pair<int, int>> cows(N);
//    set<int> s;
//    
//    for (auto &[x, y] : cows) {
//        cin >> x >> y;
//        s.insert(x);
//        s.insert(y);
//    }
//    
//    int i = 0;
//    map<int, int> compressed;
//    for (int j : s) compressed[j] = i++;
//    
//    vector<vector<int>> pasture(2*N, vector<int>(2*N));
//    for (auto &[x, y] : cows) { pasture[compressed[x]][compressed[y]]++; }
//    
//    for (int i = 0; i < 2*N; i++) {
//        for (int j = 0; j < 2*N; j++) {
//            if (i) pasture[i][j] += pasture[i-1][j];
//            if (j) pasture[i][j] += pasture[i][j-1];
//            if (i && j) pasture[i][j] -= pasture[i-1][j-1];
//        }
//    }
//    
//    auto count = [pasture](int i1, int j1, int i2, int j2) {
//        ll result = pasture[i2][j2];
//        if (i1) result -= pasture[i1-1][j2];
//        if (j1) result -= pasture[i2][j1-1];
//        if (i1 && j1) result += pasture[i1-1][j1-1];
//        
//        return result;
//    };
//    
//    sort(all(cows));
//    ll ans = N+1;
//    for (int i = 0; i < N; i++) {
//        for (int j = i+1; j < N; j++) {
//            int j1 = compressed[min(cows[i].second, cows[j].second)],
//            j2 = compressed[max(cows[i].second, cows[j].second)];
//            
//            ans += count(0, j1, compressed[cows[i].first], j2) *  count(compressed[cows[j].first], j1, 2*N-1, j2);
//        }
//    }
//    
//    cout << ans << "\n";
//}
