//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    freopen("socdist.in", "r", stdin);
//    freopen("socdist.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    vector<pair<ll, ll>> grass_intervals(M);
//    for (auto &[a, b] : grass_intervals) cin >> a >> b;
//    
//    sort(all(grass_intervals));
//    
//    auto possible = [&](ll D) {
//        int cows = N-2, i = 0;
//        ll last = grass_intervals[0].first;
//        while(cows--) {
//            last += D;
//            while (last > grass_intervals[i].second) {
//                if (i >= M-1) return false;
//                i++;
//                last = max(grass_intervals[i].first, last);
//            }
//        }
//        
//        return (grass_intervals.back().second - last >= D);
//    };
//    
//    ll l = 1, h = grass_intervals.back().second - grass_intervals[0].first,
//    max_D = 0;
//    while(l <= h) {
//        ll D = l + (h-l)/2;
//        if (possible(D)) {
//            max_D = D;
//            l = D+1;
//        }
//        
//        else h = D-1;
//    }
//    
//    cout << max_D << "\n";
//}
