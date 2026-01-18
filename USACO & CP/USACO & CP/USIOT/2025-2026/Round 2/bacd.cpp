//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//const int MOD = 1e9 + 7;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    vector<int> P(N);
//    
//    for (int &i : P) cin >> i;
//    
//    int ans = 0;
//    
//    for (int a = 0; a < N-3; a++) {
//        for (int b = a+1; b < N-2; b++) {
//            for (int c = b+1; c < N-1; c++) {
//                for (int d = c+1; d < N; d++) {
//                    ans += (P[b] < P[a] && P[a] < P[c] && P[c] < P[d]);
//                }
//            }
//        }
//    }
//    
//    cout << ans << "\n";
//}
