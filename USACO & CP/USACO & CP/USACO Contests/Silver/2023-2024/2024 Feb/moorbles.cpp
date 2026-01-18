//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    int N, M, K; cin >> N >> M >> K;
//    vector<int> can_lose(M+1), loss(M);
//    vector<string> ans(M);
//    bool possible = true;
//    
//    for (int i = 0; i < M; i++) {
//        int min_even = 1e4, min_odd = 1e4, max_even = -1, max_odd = -1;
//        bool all_even = true, all_odd = true;
//        for (int j = 0; j < K; j++) {
//            int a; cin >> a;
//            if (a % 2) { // a is odd
//                all_even = false;
//                min_odd = min(min_odd, a);
//                max_odd = max(max_odd, a);
//            }
//            else {
//                all_odd = false;
//                min_even = min(min_even, a);
//                max_even = max(max_even, a);
//            }
//        }
//        
//        if (all_even) {
//            N += min_even;
//            ans[i] = ("Even");
//        }
//        else if (all_odd) {
//            N += min_odd;
//            ans[i] = ("Odd");
//            loss[i] = min_odd + max_odd;
//        }
//        else {
//            if (max_odd <= max_even) {
//                N -= max_odd;
//                ans[i] = ("Even");
//            }
//            else {
//                N -= max_even;
//                ans[i] = ("Odd");
//                loss[i] = max_odd - max_even;
//            }
//        }
//        if (N <= 0) { possible = false; }
//        can_lose[i] = N;
//    }
//    can_lose.back() = N;
//    
//    if (!possible) { cout << "-1\n"; return; }
//    
//    for (int i = M-1; i >= 0; i--) can_lose[i] = min(can_lose[i], can_lose[i+1]);
//    
//    int lost = 0;
//    for (int i = 0; i < M; i++) {
//        if (ans[i] != "Even" && lost + loss[i] < can_lose[i]) {
//            lost += loss[i];
//            ans[i] = "Even";
//        }
//        cout << ans[i] << (i == M-1 ? "\n" : " ");
//    }
//}
//
//int main() {
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
