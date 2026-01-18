//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//// if all a_i are divisible by m, the sum of a_i is divisible by m
//// only if ∑a_i = 1 -> -1
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    vector<int> a(n);
//    vector<ll> prefix(n+1);
//    
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        prefix[i+1] = prefix[i] + a[i];
//    }
//    
//    ll total = prefix.back();
//    if (total == 1) {
//        cout << "-1\n";
//        return 0;
//    }
//    
//    auto time = [&](const ll k, const ll best) {
//        ll res = 0;
//        for (int i = 1; i <= n; i++) {
//            res += min(prefix[i] % k, k - prefix[i] % k);
//            if (res >= best) return best;
//        }
//        return res;
//    };
//    
//    ll ans = LLONG_MAX;
//    for (ll k = 2; k * k <= total; k++) {
//        if (total % k == 0) {
//            ans = time(k, ans);
//            while (total % k == 0) {
//                total /= k;
//            }
//        }
//    }
//    if (total > 1) ans = time(total, ans);
//    
//    cout << ans << "\n";
//}
