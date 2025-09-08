//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("lifeguards.in", "r", stdin);
//    freopen("lifeguards.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<pair<int, int>> lifeguards(N), points;
//    
//    for (auto &[x, y] : lifeguards) {
//        cin >> x >> y;
//        points.push_back({x, 1});
//        points.push_back({y, -1});
//    }
//    
//    sort(all(points));
//    map<int, int> compressed;
//    int i = 0;
//    for (auto &[a, _] : points) {
//        if (!compressed.count(a)) compressed[a] = i++;
//    }
//    
//    vector<int> prefix(i);
//    int layer = 0, prev = 0, total_covered = 0, min_lost = INT32_MAX;
//    for (auto &[p, l] : points) {
//        total_covered += (layer > 0) * (p - prev);
//        prefix[compressed[p]] = (layer == 1) * (p - prev);
//        if (compressed[p]) prefix[compressed[p]] += prefix[compressed[p]-1];
//        layer += l;
//        prev = p;
//    }
//    
//    for (auto &[x, y] : lifeguards) {
//        int lost = prefix[compressed[y]] - prefix[compressed[x]];
//        min_lost = min(min_lost, lost);
//    }
//    
//    cout << total_covered - min_lost << "\n";
//}
