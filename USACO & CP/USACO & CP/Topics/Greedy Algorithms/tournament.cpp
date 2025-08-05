//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n, m; cin >> n >> m;
//    vector<int> original(n), a;
//    
//    for (int &a : original) cin >> a;
//    
//    a = original;
//    sort(all(a));
//    
//    int x = 0;
//    for (int i = 0; i < n && a[i] <= m; i++) {
//        x++;
//        m -= a[i];
//    }
//    
//    if (x && x != n && m + a[x-1] >= original[x]) x++;
//    
//    cout << n - x + 1 << "\n";
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
