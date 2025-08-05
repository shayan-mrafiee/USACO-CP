//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//ll calculate(ll x) {
//    ll ans = x-1;
//    
//    ans -= x/2 + x/3 + x/5 + x/7;
//    ans += x/6 + x/10 + x/14 + x/15 + x/21 + x/35;
//    ans -= x/30 + x/42 + x/70 + x/105;
//    ans += x/210; 
//    
//    return ans;
//}
//
//void solve() {
//    ll l, r; cin >> l >> r;
//    
//    cout << calculate(r) - calculate(l-1) << "\n";
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
