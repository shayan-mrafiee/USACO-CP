//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    freopen("angry.in", "r", stdin);
//    freopen("angry.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<int> haybales(N);
//    for (int &x : haybales) cin >> x;
//    
//    sort(all(haybales));
//    
//    auto possible = [&](double R) {
//        double lo = haybales[0], hi = haybales.back();
//        while(lo <= hi) {
//            double range = R;
//            double target = lo + (hi - lo)/2; target = round(target * 10.0) / 10.0;
//            bool l_stopped = false, r_stopped = false;
//            int l = lower_bound(all(haybales), target-range) - haybales.begin(),
//            r = upper_bound(all(haybales), target+range) - haybales.begin() - 1;
//            while(!l_stopped && !r_stopped && range--) {
//                int new_l = lower_bound(all(haybales), haybales[l]-range) - haybales.begin(),
//                new_r = upper_bound(all(haybales), haybales[r]+range) - haybales.begin() - 1;
//                
//                l_stopped = (new_l == l && l > 0); r_stopped = (new_r == r && r < N-1);
//                l = new_l; r = new_r;
//                if (l == 0 && r == N-1) return true;
//            }
//            if (l_stopped && r_stopped) return false;
//            if (l_stopped) hi = target - 0.1;
//            else lo = target + 0.1;
//        }
//        return false;
//    };
//    
//    double lo = 0.1, hi = round((haybales.back() - haybales[0])/2.0 * 10.0) / 10.0,
//    min_R = hi;
//    while(lo <= hi) {
//        double R = lo + (hi - lo)/2; R = round(R * 10.0) / 10.0;
//        if (possible(R)) {
//            min_R = R;
//            hi = R-0.1;
//        }
//        else {
//            lo = R + 0.1;
//        }
//    }
//    
//    printf("%.1f\n", min_R); 
//}
