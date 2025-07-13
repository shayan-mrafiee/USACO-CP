//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Friend {
//    ll a, b, c;
//};
//
//void solve() {
//    ll N, t_C, t_M; cin >> N >> t_C >> t_M;
//    vector<Friend> friends(N);
//    for (auto &[a, b, c] : friends) cin >> a >> b >> c;
//    
//    auto possible = [&](ll moonies) {
//        ll d = t_C + t_M - moonies,
//        lo = max(1LL, t_C - moonies),
//        hi = min(t_C, d - 1);
//        
//        for (Friend &f : friends) {
//            ll a = f.a, b = f.b, c = f.c;
//            if (b - a > 0) {
//                ll num = -c + b * d;
//                ll denom = b - a;
//                ll bound = (num + denom - 1) / denom;
//                lo = max(lo, bound);
//            }
//            
//            else if (a - b > 0) {
//                ll num = c - b * d,
//                denom = a - b,
//                bound = num / denom;
//                hi = min(hi, bound);
//            }
//            
//            else if (a * d > c) return false;
//        }
//
//        return lo <= hi;
//    };
//    
//    ll lo = 0, hi = t_C + t_M - 2, min_moonies = hi;
//    while(lo <= hi) {
//        ll moonies = lo + (hi - lo)/2;
//        if (possible(moonies)) {
//            hi = moonies-1;
//            min_moonies = moonies;
//        }
//        
//        else lo = moonies+1;
//    }
//    
//    cout << min_moonies << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int T; cin >> T;
//    while(T--)
//        solve();
//}
