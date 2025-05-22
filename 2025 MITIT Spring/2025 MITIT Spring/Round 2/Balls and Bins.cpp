//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    int N; cin >> N;
//    vector<pair<ll, ll>> bins(N);
//    
//    for (auto &[a, _] : bins) cin >> a;
//    for (auto &[_, s] : bins) cin >> s;
//    
//    sort(bins.begin(), bins.end(), [](const auto &a, const auto &b) {
//        return a.second - a.first < b.second - b.first;
//    });
//    
//    for (int i = 0; i < N-1; i++) {
//        if (bins[i].first < bins[i+1].second - bins[i+1].first || bins[i].first < bins[i].second) {
//            cout << "NO\n";
//            return;
//        }
//        bins[i+1].first += bins[i].first;
//    }
//    
//    cout << "YES\n";
//}
//
//int main() {
//    int T; cin >> T;
//    while(T--)
//        solve();
//}
