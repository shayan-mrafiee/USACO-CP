#include <bits/stdc++.h>

using namespace std;
using ll = long long; 
#define all(x) x.begin(), x.end()

struct Segment {
    int x1, y1, x2, y2;
};

struct Point {
    int x, y, segIndx;
    
    bool operator<(const Point &other) {
        return x < other.x;
    }
};

bool intersect(Segment s1, Segment s2);

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
        segments[i] = {x1, y1, x2, y2};
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
            
        }
    }
}
