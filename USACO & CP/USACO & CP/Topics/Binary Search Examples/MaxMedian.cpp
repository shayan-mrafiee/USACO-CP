//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n, k; cin >> n >> k;
//    vector<int> a(n);
//    for (int &i : a) cin >> i;
//    
//    sort(all(a));
//    
//    auto possible = [&](ll x) {
//        ll operations_needed = 0;
//        for (int i = n/2; i < n; i++) {
//            operations_needed += max(0LL, x - (ll) a[i]);
//        }
//        
//        return operations_needed <= k;
//    };
//    
//    int l = 0, r = 2e9, ans = 0;
//    
//    while(l <= r) {
//        int mid = l + (r-l)/2;
//        if (possible(mid)) {
//            ans = mid;
//            l = mid + 1;
//        }
//        
//        else r = mid - 1;
//    }
//    
//    cout << ans << "\n";
//}
