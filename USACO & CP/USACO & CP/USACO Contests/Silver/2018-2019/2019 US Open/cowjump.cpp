#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

struct Segment {
    int x1, y1, x2, y2, indx;
};

struct Point {
    int x, y, segIndx;
    
    bool operator<(const Point &other) {
        return x < other.x;
    }
};

bool isect(Segment s1, Segment s2);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr); 
    freopen("cowjump.in", "r", stdin);
    freopen("cowjump.out", "w", stdout);
    
    int N; cin >> N;
    vector<Segment> segments(N);
    vector<Point> points;
    
    for (int i = 0; i < N; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        segments[i] = {x1, y1, x2, y2, i};
        points.push_back({x1, y1, i});
        points.push_back({x2, y2, i});
    }
    
    sort(all(points));
    set<Segment> active;
    int ans1, ans2;
    
    for (Point &point : points) {
        ans1 = point.segIndx;
        auto it = active.find(segments[ans1]);
        if (it == active.end()) {
            it = active.lower_bound(segments[ans1]);
            if (it != active.end() && isect(*it, segments[ans1])) { ans2 = it->indx; break; }
            if (it != active.begin()) {
                it--;
                if (isect(*it, segments[ans1])) { ans2 = it->indx; break; }
            }
        }
        
        else {
            auto after = it, before = it; 
            after++;
            if (after != active.end() && before != active.begin()) {
                after++; before--; 
                if (isect(*after, *before)) {
                    ans1 = after->indx;
                    ans2 = before->indx; 
                    break; 
                }
            }
        }
    }
    
    if (ans1 > ans2) swap(ans1, ans2);
    int cnt = 0; 
    for (int i = 0; i < N; i++) {
        cnt += (i != ans2 && isect(segments[i], segments[ans2])); 
    }
    
    cout << (cnt > 1 ? ++ans2 : ++ans1) << "\n"; 
}
