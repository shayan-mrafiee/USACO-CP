//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    ll n, x; cin >> n >> x;
//    bool possible = true;
//    
//    if (__builtin_clzll(n)  < __builtin_clzll(x)) {
//        possible = false;
//    }
//    else for (int i = 0; i <= 63; i++) {
//        if (x & (1 << i) && !(n & (1 << i))) {
//            possible = false;
//            break;
//        }
//    }
//    if (!possible) {
//        cout << "-1\n";
//    }
//    else {
//        
//    }
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
