//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    int n, m; cin >> n >> m;
//    vector<int> intelligence(n);
//    
//    for (int &a : intelligence) cin >> a;
//    sort(intelligence.begin(), intelligence.end());
//    
//    vector<int> topics(m);
//    int missing = m, l = 0, ans = -1;
//    
//    for (int r = 0; r < n; r++) {
//        int &a = intelligence[r];
//        for (int i = 1; i*i <= a; i++) {
//            if (a % i == 0) {
//                if (i <= m) {
//                    missing -= (topics[i-1] == 0);
//                    topics[i-1]++;
//                }
//                if (a/i != i && a/i <= m) {
//                    missing -= (topics[a/i-1] == 0);
//                    topics[a/i-1]++;
//                }
//            }
//        }
//        
//        while (missing == 0 && l <= r) {
//            ans = (ans == -1) ? intelligence[r] - intelligence[l] : min(ans, intelligence[r] - intelligence[l]);
//
//            int b = intelligence[l];
//            for (int i = 1; i*i <= b; i++) {
//                if (b % i == 0) {
//                    if (i <= m) {
//                        topics[i-1]--;
//                        if (topics[i-1] == 0) missing++;
//                    }
//                    if (b/i != i && b/i <= m) {
//                        topics[b/i-1]--;
//                        if (topics[b/i-1] == 0) missing++;
//                    }
//                }
//            }
//            l++;
//        }
//    }
//    
//    cout << ans << '\n';
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
