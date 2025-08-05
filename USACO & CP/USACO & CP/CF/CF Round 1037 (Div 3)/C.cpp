//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n, k; cin >> n >> k;
//    vector<int> h(n);
//    
//    for (int &i : h) cin >> i;
//    
//    int cur_h = h[k-1],
//    water_level = 1;
//    sort(all(h));
//    
//    int i = lower_bound(all(h), cur_h) - h.begin();
//    
//    while(cur_h != h.back()) {
//        i = upper_bound(h.begin() + i, h.end(), 2 * h[i] - water_level + 1) - h.begin() - 1;
//        if (cur_h == h[i]) {
//            cout << "NO\n";
//            return;
//        }
//        water_level += h[i] - cur_h;
//        cur_h = h[i];
//    }
//    
//    cout << "YES\n";
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
