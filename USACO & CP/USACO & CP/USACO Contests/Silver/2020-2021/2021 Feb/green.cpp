//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<bool>> ok;
//int N;
//
//ll solve() {
//    ll res = 0;
//    
//    for (int i = 0; i < N; i++) {
//        vector<bool> all_ones(N, 1);
//        for (int j = i; j < N; j++) {
//            int len = 0;
//            for (int k = 0; k < N; k++) {
//                all_ones[k] = all_ones[k] && ok[j][k];
//                if (all_ones[k]) res += ++len;
//                else len = 0;
//            }
//        }
//    }
//    
//    return res;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    cin >> N;
//    vector<vector<int>> pasture(N, vector<int>(N));
//    ok = vector<vector<bool>>(N, vector<bool>(N));
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> pasture[i][j];
//            ok[i][j] = pasture[i][j] >= 100;
//        }
//    }
//    ll ans = solve();
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            ok[i][j] = pasture[i][j] >= 101;
//        }
//    }
//    
//    ans -= solve();
//    
//    cout << ans << "\n";
//}
