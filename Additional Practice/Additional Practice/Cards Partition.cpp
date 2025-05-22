//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    ll n, k; cin >> n >> k;
//    ll sum = 0, maximum = 0, zeros = 0;
//    for (int i = 0; i < n; i++) {
//        ll a; cin >> a;
//        sum += a;
//        maximum = max(maximum, a);
//        zeros += (a == 0);
//    }
//    ll ans;
//    for (ll grps = maximum; ; grps++) {
//        if (grps - sum % grps <= k) {
//            k -= grps - sum % grps;
//            sum += grps - sum % grps;
//            ans = sum/grps;
//            break; 
//        }
//    }
//    
//    cout << ans << endl;
//}
//
//int main() {
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
