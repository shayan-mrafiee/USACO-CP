//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Casino {
//    int l, r, real;
//    
//    bool operator<(const Casino &other) const {
//        return real < other.real;
//    };
//};
//
//void solve() {
//    int n, k; cin >> n >> k;
//    vector<Casino> casinos(n);
//    
//    for (auto &[l, r, real] : casinos) cin >> l >> r >> real;
//    
//    sort(all(casinos));
//    
//    auto possible = [&](int i, auto self) -> bool {
//        if (casinos[i].l <= k && casinos[i].r >= k) return true;
//        if (i == 0 && (casinos[i].l > k || casinos[i].r < k)) return false;
//        
//        i = lower_bound(all(casinos), casinos[i].l, [](const Casino &a, int val) {
//            return a.real < val;
//        }) - casinos.begin();
//        
//        return self(i, self);
//    };
//    
//    for (int i = n-1; i >= 0; i--) {
//        if (possible(i, possible)) {
//            cout << max(k, casinos[i].real) << "\n";
//            return;
//        }
//    }
//    
//    cout << k << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
