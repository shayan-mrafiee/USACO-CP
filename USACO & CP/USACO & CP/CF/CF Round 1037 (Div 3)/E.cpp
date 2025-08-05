//#include <bits/stdc++.h>
//#include <numeric>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n; cin >> n;
//    vector<int> p(n), s(n);
//    
//    for (int &i : p) cin >> i;
//    for (int &i : s) cin >> i;
//    
//    for (int i = 0; i < n-1; i++)
//        if (p[i] % p[i+1]) {
//            cout << "NO\n";
//            return;
//        }
//    for (int i = n-1; i >= 1; i--)
//        if (s[i] % s[i-1]) {
//            cout << "NO\n";
//            return;
//        }
//    
//    for (int i = 0; i < n; i++) {
//        if (gcd(p[i], s[i]) != p.back() || gcd(p[i], s[i]) != s[0]) {
//            cout << "NO\n";
//            return;
//        }
//    }
//    
//    cout << "YES\n";
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
