//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n, k; cin >> n >> k;
//    
//    int day = 1, peaks = 0;
//    bool rest = false;
//    
//    for (int i = 0; i < n; i++) {
//        int rains; cin >> rains;
//        if (rest) {
//            rest = false;
//            continue;
//        }
//        if (!rains && day == k) {
//            peaks++;
//            rest = true;
//            day = 1;
//        }
//        else if (rains) day = 1;
//        else day++;
//    }
//    
//    cout << peaks << "\n";
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
