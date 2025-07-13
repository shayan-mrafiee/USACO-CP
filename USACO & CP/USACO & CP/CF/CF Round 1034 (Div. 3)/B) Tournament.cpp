//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n, j, k; cin >> n >> j >> k;
//    vector<int> players(n);
//    for (int &a : players) cin >> a;
//    int player = players[j-1];
//    
//    if (k > 1) {
//        cout << "YES\n";
//        return;
//    }
//    
//    if (player == *max_element(all(players))) cout << "YES\n";
//    else cout << "NO\n";
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
