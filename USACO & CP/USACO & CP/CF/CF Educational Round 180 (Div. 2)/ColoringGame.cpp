//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n; cin >> n;
//    vector<int> a(n);
//    for (int &i : a) cin >> i;
//    
//    sort(all(a));
//    
//    ll ans = 0;
//    for (int mid = 1; mid < n-1; mid++) {
//        for (int r = n-1; r > mid; r--) {
//            int target = max(a.back() - a[mid] - a[r], a[r] - a[mid]),
//            l = upper_bound(a.begin(), a.begin()+mid, target) - a.begin();
//            ans += mid - l;
//        }
//    }
//    
//    cout << ans << "\n"; 
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
