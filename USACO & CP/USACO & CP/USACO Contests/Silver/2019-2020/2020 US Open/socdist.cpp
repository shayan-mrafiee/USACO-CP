//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("socdist.in", "r", stdin);
//    freopen("socdist.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    vector<pair<ll, ll>> intervals(M);
//    
//    for (auto &[a, b] : intervals) cin >> a >> b;
//    
//    sort(all(intervals));
//    
//    auto possible = [&](ll D) {
//        ll last = intervals[0].first;
//        int i = 0;
//        for (int cow = 1; cow < N; cow++) {
//            while(last + D > intervals[i].second) {
//                i++;
//                if (i >= M) goto jump;
//            }
//            last = max(last + D, intervals[i].first);
//        }
//        return true;
//        
//        jump:
//        last = intervals.back().second;
//        i = M-1;
//        for (int cow = 1; cow < N; cow++) {
//            while(last - D < intervals[i].first) {
//                i--;
//                if (i < 0) return false;
//            }
//            last = min(last - D, intervals[i].second);
//        }
//        
//        return true;
//    };
//    
//    ll lo = 1, hi = intervals.back().second - intervals.front().first, ans = 1;
//    while(lo <= hi) {
//        ll D = lo + (hi - lo)/2;
//        if (possible(D)) {
//            lo = D+1;
//            ans = D;
//        }
//        else hi = D-1;
//    }
//    
//    cout << ans << "\n";
//}
