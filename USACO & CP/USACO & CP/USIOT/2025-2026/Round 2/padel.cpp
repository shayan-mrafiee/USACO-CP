//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int N; cin >> N;
//    vector<int> points(N);
//    
//    for (int &i : points) cin >> i;
//    
//    int ans = 0;
//    for (int warmup = 0; warmup < N; warmup++) {
//        int o = 0, t = 0, games = 0;
//        for (int i = warmup; i < N; i++) {
//            o += points[i] == 1;
//            t += points[i] == 2;
//            if ((o >= 4 || t >= 4) && abs(o - t) >= 2) {
//                games++;
//                o = t = 0;
//            }
//        }
//        ans = max(ans, games);
//    }
//    
//    cout << ans << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while (t--) {
//        solve();
//    }
//}
