//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int N; cin >> N;
//    vector<int> heights (N), occurences (N+1, 0);
//    int maximum = 0;
//    
//    for (int &h : heights) {
//        cin >> h;
//        maximum = max(maximum, h);
//        occurences[h]++;
//    }
//    
//    int ans = N;
//    
//    for (int i = 1; i <= N; i++) {
//        if (i == maximum) {
//            ans -= occurences[i] - 1;
//        }
//        else {
//            if (occurences[i] >= 2) ans -= occurences[i] - 2;
//            else ans -= occurences[i];
//        }
//    }
//    
//    cout << ans << endl;
//    
//}
//
//int main() {
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
