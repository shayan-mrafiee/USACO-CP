//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int N, M; cin >> N >> M;
//    
//    
//    if (N == M) {
//        if (N <= 3) cout << "draw\n";
//        else cout << "filippo\n";
//    }
//    else if (N < M) cout << "filippo\n"; // sure
//    
//    else if (N > M) {
//        if (N % 3 == 0 && M >= 2 * N / 3 + 2) cout << "filippo\n";
//        else if (N % 3 == 1 && M >= 2 * (N - 1) / 3 + 2) cout << "filippo\n";
//        else if (N % 3 == 2 && M >= 2 * (N - 2)/3 + 3) cout << "filippo\n";
//        
//        else if (N % 3 == 0 && M == 2 * N / 3 + 1) cout << "draw\n";
//        else if (N % 3 == 1 && M == 2 * (N - 1) / 3 + 1) cout << "draw\n";
//        else if (N % 3 == 2 && M == 2 * (N - 2) / 3 + 2) cout << "draw\n";
//        
//        else cout << "tommaso\n";
//    }
//}
//
//int main() {
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
