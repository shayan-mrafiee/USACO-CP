//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<int> v;
//
//int get_compressed(int a) {
//    return lower_bound(all(v), a) - v.begin();
//}
//
//int main() {
//    freopen("lifeguards.in", "r", stdin);
//    freopen("lifeguards.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<pair<int, int>> lifeguards(N), points;
//    for (auto &[a, b] : lifeguards) {
//        cin >> a >> b;
//        points.push_back({a, 1});
//        points.push_back({b, -1});
//        v.push_back(a);
//        v.push_back(b);
//    }
//    
//    sort(all(points));
//    sort(all(v));
//    v.erase(unique(all(v)), v.end());
//    
//    int layers = 1;
//    ll total_covered = 0;
//    vector<int> covered_by1(v.size()+1);
//    for (int i = 1; i < points.size(); i++) {
//        total_covered += (layers > 0) * (points[i].first - points[i-1].first);
//        if (layers == 1) covered_by1[get_compressed(points[i].first)+1] += points[i].first - points[i-1].first;
//        layers += points[i].second;
//    }
//    
//    for (int i = 1; i < covered_by1.size(); i++) covered_by1[i] += covered_by1[i-1];
//    
//    ll max_covered = 0;
//    for (auto &[a, b] : lifeguards) {
//        max_covered = max(max_covered, total_covered - covered_by1[get_compressed(b)+1] + covered_by1[get_compressed(a)+1]);
//    }
//    
//    cout << max_covered << "\n";
//}
