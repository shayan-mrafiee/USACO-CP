//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<int> indices;
//pair<pair<int, int>, int> updates[100005];
//pair<int, int> queries[100005];
//ll diff_arr[400005] = {}, prefix[400005] = {};
//
//int getIndx(int i) {
//    return lower_bound(all(indices), i) - indices.begin();
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, Q; cin >> N >> Q;
//    
//    for (int i = 0; i < N; i++) {
//        int l, r, v; cin >> l >> r >> v;
//        indices.push_back(l);
//        indices.push_back(r);
//        updates[i] = {{l, r}, v};
//    }
//    for (int i = 0; i < Q; i++) {
//        int l, r; cin >> l >> r;
//        indices.push_back(l);
//        indices.push_back(r);
//        queries[i] = {l, r};
//    }
//    
//    sort(all(indices));
//    indices.erase(unique(all(indices)), indices.end());
//    
//    for (auto &a : updates) {
//        diff_arr[getIndx(a.first.first)] += a.second;
//        diff_arr[getIndx(a.first.second)] -= a.second;
//    }
//    
//    for (int i = 1; i < indices.size(); i++) diff_arr[i] += diff_arr[i-1];
//    
//    for (int i = 1; i < indices.size(); i++) {
//        prefix[i] = prefix[i-1] + diff_arr[i-1] * (indices[i] - indices[i-1]);
//    }
//    
//    for (int i = 0; i < Q; i++) {
//        cout << prefix[getIndx(queries[i].second)] - prefix[getIndx(queries[i].first)] << "\n";
//    }
//}
