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
//    for (int i = 1; i < n; i++) {
//        if (abs(a[i] - a[i-1]) <= 1) {
//            cout << 0 << "\n";
//            return;
//        }
//    }
//    
//    int ans = 1e5;
//    for (int i = 2; i < n; i++) {
//        int lo = a[i] - 1, hi = a[i] + 1, r = i-1;
//        for (int l = i-2; l >= 0; l--) {
//            if (max(a[l], a[r]) >= lo && min(a[l], a[r]) <= hi) {
//                ans = min(ans, r - l);
//                break;
//            }
//        }
//    }
//    
//    for (int i = n-3; i >= 0; i--) {
//        int lo = a[i] - 1, hi = a[i] + 1, l = i+1;
//        for (int r = i+2; r < n; r++) {
//            if (max(a[l], a[r]) >= lo && min(a[l], a[r]) <= hi) {
//                ans = min(ans, r - l);
//                break;
//            }
//        }
//    }
//    
//    cout << ((ans == 1e5) ? -1 : ans) << "\n";
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
