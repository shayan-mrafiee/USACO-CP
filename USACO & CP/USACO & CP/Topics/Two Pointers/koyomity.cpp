//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    string s; cin >> s;
//    
//    int q; cin >> q;
//    while(q--) {
//        int m; char c;
//        cin >> m >> c;
//        
//        int l = 0, r = 0, max_koyomity = 0;
//        while(l < n && r < n) {
//            while(r < n) {
//                if (s[r] != c) {
//                    if (m == 0) break;
//                    m--;
//                }
//                r++;
//            }
//            max_koyomity = max(max_koyomity, r-l);
//            m += (s[l++] != c);
//        }
//        
//        cout << max_koyomity << "\n";
//    }
//}
