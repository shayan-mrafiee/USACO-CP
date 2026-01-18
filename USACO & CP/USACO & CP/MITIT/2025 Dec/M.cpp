//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int N; cin >> N;
//    vector<string> grid(N);
//    
//    for (int i = 0; i < N; i++) {
//        grid[i].resize(N, '.');
//        grid[i][0] = grid[i].back() = '#';
//        if (i <= N/2) grid[i][i] = grid[i][N-i-1] = '#';
//    }
//    
//    for (string s : grid) cout << s << "\n";
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
