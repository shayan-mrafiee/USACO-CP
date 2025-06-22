//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    freopen("convention.in", "r", stdin);
//    freopen("convention.out", "w", stdout);
//    
//    int N, M, C; cin >> N >> M >> C;
//    vector<int> time(N);
//    for (int &t : time) cin >> t;
//    
//    sort(all(time));
//    
//    auto max_waiting_time = [&](int waiting_time) {
//        int max_waiting = 0, buses = 1, on_board = 1,
//        first = time[0];
//        for (int i = 1; i < N; i++) {
//            if (on_board == C || time[i] - first > waiting_time) {
//                buses++;
//                on_board = 1;
//                max_waiting = max(max_waiting, time[i-1] - first);
//                first = time[i];
//            }
//            else {
//                on_board++;
//            }
//        }
//        
//        if (buses > M) return -1;
//        
//        max_waiting = max(max_waiting, time.back() - first);
//        return max_waiting; 
//    };
//    
//    int l = 0, r = time.back() - time[0], ans = r;
//    while(l <= r) {
//        int test = l + (r-l)/2,
//        waiting_time = max_waiting_time(test);
//        if (waiting_time != -1) {
//            ans = waiting_time;
//            r = waiting_time-1;
//        }
//        else {
//            l = test+1;
//        }
//    }
//    
//    cout << ans << "\n"; 
//}
