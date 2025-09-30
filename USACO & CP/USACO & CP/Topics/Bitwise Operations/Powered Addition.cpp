//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n; cin >> n;
//    int ans = 0, max_a = -2e9;
//    
//    for (int i = 0; i < n; i++) {
//        int a; cin >> a;
//        max_a = max(max_a, a);
//        
//        if (max_a > a) {
//            ans |= max_a - a;
//        }
//    }
//    
//    if (!ans) {
//        cout << "0\n";
//        return; 
//    }
//    cout << 32 - __builtin_clz(ans) << "\n";
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
