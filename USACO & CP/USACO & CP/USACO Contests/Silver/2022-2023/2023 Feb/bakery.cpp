//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//struct Customer {
//    int cookies, muffins;
//    ll c;
//};
//
//void solve() {
//    int N;
//    ll t_C, t_M;
//    cin >> N >> t_C >> t_M;
//    vector<Customer> customers(N);
//    
//    for (auto &[a, b, c] : customers) cin >> a >> b >> c;
//    
//    auto check = [&](ll moonies) {
//        ll m_C = min(moonies, t_C - 1);
//        for (auto &[a, b, c] : customers) {
//            
//            if (a == b || a * (t_C - m_C) + b * (t_M - (moonies - m_C)) <= c) continue;
//            m_C = min({m_C, (c - a*t_C - b*t_M + b*moonies)/(b-a), (ll) t_C-1});
//            if (m_C < 0) return false;
//        }
//        
//        ll m_M = min((ll) t_M-1, moonies - m_C);
//        for (auto &[a, b, c] : customers) {
//            if (a * (t_C - m_C) + b * (t_M - m_M) > c) return false;
//        }
//        
//        return true;
//    };
//    
//    ll ans = -1;
//    ll lo = 0, hi = t_C + t_M - 2;
//    while(lo <= hi) {
//        ll moonies = lo + (hi - lo)/2;
//        
//        if (check(moonies)) {
//            hi = moonies-1;
//            ans = moonies;
//        }
//        
//        else lo = moonies+1;
//    }
//    
//    cout << ans << "\n";
//}
//
//int main() {
//    int T; cin >> T;
//    while(T--)
//        solve();
//}
