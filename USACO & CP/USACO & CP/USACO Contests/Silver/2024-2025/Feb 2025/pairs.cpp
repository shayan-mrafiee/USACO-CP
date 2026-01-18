//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    ll a, b, c, d;
//    cin >> a >> b >> c >> d;
//    ll ans = 0;
//    while (a != c || b != d) {
//        if (c < a || d < b) goto impossible;
//        ll ops;
//        if (c < d) {
//            ops = (d-b)/c;
//            d -= c * ops;
//        }
//        else {
//            ops = (c-a)/d;
//            c -= d * ops;
//        }
//        if (!ops) goto impossible;
//        ans += ops;
//    }
//    
//    cout << ans << "\n";
//    return;
//    
//    impossible:
//    cout << "-1\n";
//}
//
//int main() {
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
