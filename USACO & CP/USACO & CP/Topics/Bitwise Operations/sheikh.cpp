//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n, q; cin >> n >> q;
//    vector<ll> prefix_sum(n+1), prefix_xor(n+1);
//    
//    for (int i = 0; i < n; i++) {
//        int a; cin >> a;
//        prefix_sum[i+1] = prefix_sum[i] + a;
//        prefix_xor[i+1] = prefix_xor[i] ^ a;
//    }
//    
//    int L, R; cin >> L >> R;
//    int l = L, r = R;
//    
//    auto f = [&](int l, int r) {
//        return prefix_sum[r] - prefix_sum[l-1] - (prefix_xor[r] ^ prefix_xor[l-1]);
//    };
//    
//    auto possible = [&](int length) {
//        for (int i = L; i + length -1 <= R; i++) {
//            if (f(i, i + length - 1) == prefix_sum.back() - prefix_xor.back()) {
//                l = i; r = i+length-1;
//                return true;
//            }
//        }
//        
//        return false;
//    };
//    
//    int lo = 1, hi = R-L+1;
//    while(lo <= hi) {
//        int mid = lo + (hi - lo)/2;
//        if (possible(mid)) hi = mid-1;
//        else lo = mid+1;
//    }
//    
//    cout << l << ' ' << r << "\n";
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
