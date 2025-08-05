//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n, m; cin >> n >> m;
//    vector<int> b(n), g(m);
//    
//    for (int &i : b) cin >> i;
//    for (int &i : g) cin >> i;
//    
//    sort(all(b));
//    sort(all(g));
//    
//    if (g[0] < b.back() || (m == 1 && count(all(b), g[0]) != n) || (n == 1 && !count(all(g), b[0]))) {
//        cout << -1 << "\n";
//        return 0;
//    }
//    
//    vector<int> c(n, m);
//    if (g[0] == b.back()) c.back() = 0;
//    else for (int i = n-1; i >= 0 && m; i--) {
//        int val = min(c[i]-1, m);
//        c[i] -= val;
//        m -= val;
//    }
//    
//    ll ans = accumulate(all(g), 0LL);
//    for (int i = 0; i < n; i++) {
//        ans += (ll) b[i] * c[i];
//    }
//    
//    cout << ans << "\n";
//}
