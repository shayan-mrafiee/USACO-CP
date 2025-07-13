//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Friend {
//    int x, v;
//};
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    vector<Friend> friends(n);
//    for (Friend &f : friends) cin >> f.x;
//    for (Friend &f : friends) cin >> f.v;
//    
//    sort(all(friends), [](const Friend &a, const Friend &b) {
//        return a.x < b.x;
//    });
//    
//    auto time = [&](double spot) {
//        double left = 0, right = 0;
//        for (Friend &f : friends) {
//            if (f.x <= spot) {
//                left = max(left, (spot - f.x)/f.v);
//            }
//            else {
//                right = max(right, (f.x - spot)/f.v);
//            }
//        }
//        
//        return make_pair(left, right);
//    };
//    
//    double lo = friends[0].x, hi = friends.back().x, min_time = numeric_limits<double>::max();
//    while(lo <= hi) {
//        double spot = lo + (hi - lo)/2;
//        pair<double, double> times = time(spot);
//        min_time = min(min_time, max(times.first, times.second));
//        if (times.first == times.second) {
//            cout << min_time << "\n";
//            return 0;
//        }
//        if (times.first < times.second) {
//            lo = spot + 0.0000001;
//        }
//        else hi = spot - 0.0000001;
//    }
//    
//    printf("%.7f\n", min_time);
//}
