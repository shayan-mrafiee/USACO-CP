//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    int N, K; cin >> N >> K;
//    int a = 0, b = 0;
//    string r; cin >> r;
//    if (K == 1) {
//        cout << r << "\n";
//        return;
//    }
//    
//    auto test = [&](string b) {
//
//        int ones = count(win.begin(), win.end(), '1');
//        int l = 0, ri = K-1;
//        while (ri < N) {
//            if (ones % 2 != r[l]) return false;
//            ones -= b[l++];
//            ones += b[++ri];
//        }
//        return true;
//    };
//    
//    int mn = INT32_MAX, mx = 0;
//    for (int i = 0; i < (1 << 8); i++) {
//        
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
