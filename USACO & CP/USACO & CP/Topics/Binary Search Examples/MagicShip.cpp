//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//pair<int, int> motion(char c) {
//    switch(c) {
//        case 'L': return {-1, 0};
//        case 'R': return {1, 0};
//        case 'U': return {0, 1};
//        default: return {0, -1};
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int x1, y1, x2, y2, n; cin >> x1 >> y1 >> x2 >> y2 >> n;
//    string s; cin >> s;
//    
//    int dx = 0, dy = 0;
//    for (char c : s) {
//        dx += motion(c).first;
//        dy += motion(c).second;
//    }
//    
//    auto possible = [=](ll days) {
//        ll cur_x = x1 + (days/n) * dx, cur_y = y1 + (days/n) * dy;
//        for (int i = 0; i < days % n; i++) {
//            cur_x += motion(s[i]).first;
//            cur_y += motion(s[i]).second;
//        }
//        
//        return (abs(cur_x - x2) + abs(cur_y - y2) <= days);
//    };
//    
//    ll lo = 0, hi = 1e18,
//    min_days = -1;
//    while(lo <= hi) {
//        ll days = lo + (hi - lo)/2;
//        if (possible(days)) {
//            min_days = days;
//            hi = days-1;
//        }
//        else lo = days + 1;
//    }
//    
//    cout << min_days << "\n";
//}
