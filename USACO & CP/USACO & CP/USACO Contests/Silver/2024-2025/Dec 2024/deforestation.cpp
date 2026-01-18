//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//struct Restriction {
//    int l, r, t;
//    
//    bool operator<(const Restriction &other) const {
//        return l < other.l;
//    }
//};
//
//void solve() {
//    int N, K; cin >> N >> K;
//    vector<int> trees(N);
//    vector<Restriction> restrictions(K);
//    
//    for (int &x : trees) cin >> x;
//    sort(all(trees));
//    
//    for (auto &[l, r, t] : restrictions) cin >> l >> r >> t;
//    sort(all(restrictions));
//    
//    map<Restriction, int> has;
//    for (int t : trees) {
//        for (Restriction res : restrictions) {
//            if (t >= res.l && t <= res.r) has[res]++;
//        }
//    }
//    
//    int ans = 0;
//    for (int t : trees) {
//        bool can_cut = true;
//        for (auto &[res, amt] : has) {
//            if (t >= res.l && t <= res.r && amt <= res.t) { can_cut = false; break; }
//        }
//        if (!can_cut) continue;
//        ans++;
//        for (auto &[res, amt] : has) {
//            if (t >= res.l && t <= res.r) amt--; 
//        }
//    }
//    
//    cout << ans << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
