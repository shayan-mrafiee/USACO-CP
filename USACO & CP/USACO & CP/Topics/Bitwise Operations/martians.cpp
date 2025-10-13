//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n, k; cin >> n >> k;
//    vector<pair<int, int>> a(n);
//    
//    for (int i = 0; i < n; i++) {
//        cin >> a[i].first;
//        a[i].second = i+1;
//    }
//    
//    sort(all(a));
//    int maximum = -1, ans[3];
//    for (int i = 0; i < n-1; i++) {
//        int val = a[i].first ^ a[i+1].first ^ ((1 << k) - 1);
//        if (val > maximum) {
//            maximum = val;
//            ans[0] = a[i].second;
//            ans[1] = a[i+1].second;
//            ans[2] = (a[i].first & a[i+1].first) ^ ((1 << k) - 1);
//        }
//    }
//    
//    cout << ans[0] << " " << ans[1] << " " << ans[2] << "\n";
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
