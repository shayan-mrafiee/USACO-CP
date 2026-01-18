//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    string s; cin >> s;
//    
//    string res;
//    for (char c : s) {
//        if (!res.empty()) {
//            if (c == 'B' && (res.back() == 'B' || res.back() == 'A')) {
//                res.pop_back();
//                continue;
//            }
//        }
//        res.push_back(c);
//    }
//    
//    cout << res.size() << "\n";
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
