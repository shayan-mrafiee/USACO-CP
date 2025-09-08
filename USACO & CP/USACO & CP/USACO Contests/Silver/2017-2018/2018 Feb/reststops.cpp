//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("reststops.in", "r", stdin);
//    freopen("reststops.out", "w", stdout);
//    
//    int L, N, r_F, r_B;
//    cin >> L >> N >> r_F >> r_B;
//    vector<pair<int, int>> stops(N);
//    
//    for (auto &[x, c] : stops) cin >> x >> c;
//    
//    vector<pair<int, int>> suffix_nextBest(N);
//    suffix_nextBest.back() = stops.back();
//    
//    for (int i = N-2; i >= 0; i--) {
//        suffix_nextBest[i] = suffix_nextBest[i+1];
//        if (stops[i].second > suffix_nextBest[i].second) suffix_nextBest[i] = stops[i];
//    }
//    
//    int dist = 0;
//    ll tastiness_units = 0;
//    for (auto &[x, c] : suffix_nextBest) {
//        tastiness_units += 1LL * (x - dist) * (r_F - r_B) * c;
//        dist = x;
//    }
//    
//    cout << tastiness_units << "\n";
//}
