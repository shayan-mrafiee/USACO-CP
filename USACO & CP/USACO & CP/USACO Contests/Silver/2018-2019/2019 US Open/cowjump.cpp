//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Segment {
//    int x1, y1, x2, y2, indx;
//};
//
//struct Point {
//    int x, y, segIndx;
//    
//    bool operator<(const Point &other) const {
//        return x < other.x;
//    }
//};
//
//int sign(ll l) {
//    if (l == 0) return 0;
//    if (l > 0) return 1;
//    return -1; 
//}
//
//double x;
//double eval(Segment s) {
//    if (s.x1 == s.x2) return s.y1;
//    return (s.y2 - s.y1) * (x - s.x1) / (s.x2 - s.x1) + s.y1;
//}
//
//Point operator- (const Point &p, const Point &q) { return {p.x - q.x, p.y - q.y}; }
//ll operator* (const Point &p, const Point &q) { return sign(p.x*q.y - p.y*q.x); }
//bool operator< (const Segment &s1, const Segment s2) { return eval(s1) < eval(s2); }
//
//bool isect(Segment s1, Segment s2) {
//    Point
//    p1 = {s1.x1, s1.y1},
//    q1 = {s1.x2, s1.y2},
//    p2 = {s2.x1, s2.y1},
//    q2 = {s2.x2, s2.y2};
//    
//    return ((q2 - p1) * (q1 - p1)) * ((q1 - p1) * (p2 - p1)) >= 0 && ((q1 - p2) * (q2 - p2)) * ((q2 - p2) * (p1 - p2)) >= 0;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("cowjump.in", "r", stdin);
//    freopen("cowjump.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<Segment> segments(N);
//    vector<Point> points;
//    
//    for (int i = 0; i < N; i++) {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        if (x1 > x2) {
//            swap(x1, x2);
//            swap(y1, y2);
//        }
//        segments[i] = {x1, y1, x2, y2, i};
//        points.push_back({x1, y1, i});
//        points.push_back({x2, y2, i});
//    }
//    
//    sort(all(points));
//    set<Segment> active;
//    int ans1, ans2;
//    
//    for (Point &point : points) {
//        ans1 = point.segIndx; x = point.x; 
//        auto it = active.find(segments[ans1]);
//        if (it == active.end()) {
//            it = active.lower_bound(segments[ans1]);
//            if (it != active.end() && isect(*it, segments[ans1])) { ans2 = it->indx; break; }
//            if (it != active.begin()) {
//                it--;
//                if (isect(*it, segments[ans1])) { ans2 = it->indx; break; }
//            }
//            active.insert(segments[ans1]);
//        }
//        
//        else {
//            auto after = it, before = it; 
//            after++;
//            if (after != active.end() && before != active.begin()) {
//                after++; before--; 
//                if (isect(*after, *before)) {
//                    ans1 = after->indx;
//                    ans2 = before->indx; 
//                    break; 
//                }
//            }
//            active.erase(it);
//        }
//    }
//    
//    if (ans1 > ans2) swap(ans1, ans2);
//    int cnt = 0; 
//    for (int i = 0; i < N; i++) {
//        cnt += (i != ans2 && isect(segments[i], segments[ans2])); 
//    }
//    
//    cout << (cnt > 1 ? ++ans2 : ++ans1) << "\n"; 
//}
