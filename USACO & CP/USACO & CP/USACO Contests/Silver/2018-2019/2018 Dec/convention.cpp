//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("convention.in", "r", stdin);
//    freopen("convention.out", "w", stdout);
//    
//    int N, M, C; cin >> N >> M >> C;
//    vector<int> arrival_times(N);
//    
//    for (int &t : arrival_times) cin >> t;
//    
//    sort(all(arrival_times));
//    
//    auto required_buses = [&](int max_wait_time) {
//        int buses = 0, cur_on_bus = 1, prev = arrival_times[0];
//        for (int i = 1; i < N; i++) {
//            if (cur_on_bus == C || arrival_times[i] - prev > max_wait_time) {
//                cur_on_bus = 1;
//                buses++;
//                prev = arrival_times[i];
//            }
//            else cur_on_bus++;
//        }
//        return buses + (cur_on_bus > 0);
//    };
//    
//    int lo = 0, hi = arrival_times.back() - arrival_times[0];
//    int best_max_time = 0;
//    while(lo <= hi) {
//        int time = lo + (hi - lo)/2;
//        int buses = required_buses(time);
//        if (buses <= M) {
//            hi = time-1;
//            best_max_time = time;
//        }
//        else lo = time+1;
//    }
//    
//    cout << best_max_time << "\n";
//}
