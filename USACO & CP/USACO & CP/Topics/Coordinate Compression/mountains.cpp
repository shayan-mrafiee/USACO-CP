//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Peak {
//    int x, y;
//    bool operator<(const Peak &other) const { return x < other.x; }
//};
//
//ll y_right(int x, Peak mountain) {
//    return (ll) -x + mountain.x + mountain.y;
//}
//
//ll y_left(int x, Peak mountain) {
//    return (ll) x + mountain.y - mountain.x;
//}
//
//int main() {
//    freopen("mountains.in", "r", stdin);
//    freopen("mountains.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<Peak> mountains(N);
//    vector<bool> visible(N, true);
//    for (auto &[x, y] : mountains) cin >> x >> y;
//    
//    sort(all(mountains));
//    
//    int idx = 0;
//    for (int i = 1; i < N; i++) {
//        if (y_right(mountains[i].x, mountains[idx]) < mountains[i].y) idx = i;
//        else visible[i] = false;
//    }
//    
//    idx = N-1;
//    for (int i = N-2; i >= 0; i--) {
//        if (!visible[i]) continue;
//        if (y_left(mountains[i].x, mountains[idx]) < mountains[i].y) idx = i;
//        else visible[i] = false;
//    }
//    
//    int visible_mountains = 0;
//    for (bool b : visible) visible_mountains += b;
//    
//    cout << visible_mountains << "\n";
//}
