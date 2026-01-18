//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, K, L;
//    cin >> N >> K >> L;
//    
//    vector<int> c(N);
//    
//    for (int &i : c) cin >> i;
//    
//    sort(all(c));
//    
//    int lo = 0, hi = N;
//    for (int i = 0; i < N; i++) {
//        if (c[i] <= N-i) lo = c[i];
//    }
//    
//    auto possible = [&](int target_h) {
//        ll needed = 0;
//        for (int i = N-target_h; i < N; i++) {
//            if (c[i] >= target_h) break;
//            if (target_h - c[i] > K) return false;
//            needed += target_h - c[i];
//        }
//        
//        return needed <= 1LL * K*L;
//    };
//    
//    int ans = lo;
//    while(lo <= hi) {
//        int mid = lo + (hi - lo)/2;
//        if (possible(mid)) {
//            ans = mid;
//            lo = mid+1;
//        } else hi = mid - 1;
//    }
//    
//    cout << ans << "\n";
//}
