//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("teleport.in", "r", stdin);
//    freopen("teleport.out", "w", stdout);
//    
//    int N; cin >> N;
//    map<int, int> slope_change;
//    ll cur_time = 0, cur_y = -2e8, slope = 0;
//    
//    for (int i = 0; i < N; i++) {
//        int a, b;
//        cin >> a >> b;
//        cur_time += abs(a - b);
//        
//        if (abs(a) > abs(a - b)) continue;
//        if ((a < 0 && a < b) || (a >= 0 && a >= b)) {
//            slope_change[0]--;
//            slope_change[2*b]--;
//        }
//        else if ((a < 0 && a >= b) || (a >= 0 && a < b)) {
//            slope_change[2*b - 2*a]--;
//            slope_change[2*a]--;
//        }
//        slope_change[b] += 2;
//    }
//    
//    ll best_time = cur_time;
//    for (auto &[y, d] : slope_change) {
//        cur_time += (y - cur_y) * slope;
//        slope += d;
//        best_time = min(best_time, cur_time);
//        cur_y = y; 
//    }
//    
//    cout << best_time << "\n";
//}
