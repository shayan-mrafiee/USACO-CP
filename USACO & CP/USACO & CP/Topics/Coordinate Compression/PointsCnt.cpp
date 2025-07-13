//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//vector<ll> endpoints;
//
//int getCompressed(ll point) {
//    return lower_bound(all(endpoints), point) - endpoints.begin();
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    vector<pair<ll, ll>> segments(n);
//    
//    for (auto &[l, r] : segments) {
//        cin >> l >> r;
//        endpoints.push_back(l);
//        endpoints.push_back(r+1);
//    }
//    
//    sort(all(endpoints));
//    endpoints.erase(unique(all(endpoints)), endpoints.end());
//    
//    vector<ll> dif_arr(2*n);
//    for (auto &[l, r] : segments) {
//        dif_arr[getCompressed(l)]++;
//        dif_arr[getCompressed(r+1)]--;
//    }
//    for (int i = 1; i < 2*n; i++) dif_arr[i] += dif_arr[i-1];
//    
//    vector<ll> ans(n+1, 0);
//    for (int i = 1; i < endpoints.size(); i++) {
//        ans[dif_arr[i-1]] += endpoints[i] - endpoints[i-1];
//    }
//    
//    for (int k = 1; k <= n; k++) cout << ans[k] << ' ';
//    cout << "\n";
//}
