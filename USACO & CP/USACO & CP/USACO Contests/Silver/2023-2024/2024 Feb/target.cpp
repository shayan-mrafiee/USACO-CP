//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//bool check(vector<int> slopes, vector<pair<int, int>> points, ll target_y, bool find_max = true) {
//    vector<ll> m;
//    for (auto &[x, y] : points) {
//        m.push_back((y - target_y)/x);
//    }
//    
//    sort(all(m));
//    for (int i = 0; i < m.size(); i++) {
//        if (find_max && slopes[i] < m[i]) return false;
//        else if (!find_max && slopes[i] > m[i]) return false;
//    }
//    
//    return true;
//}
//
//void solve() {
//    int N, X; cin >> N >> X;
//    vector<pair<int, int>> needs_neg, needs_pos;
//    vector<int> pos_slopes, neg_slopes;
//    vector<int> left;
//    
//    for (int i = 0; i < N; i++) {
//        int y1, y2, x2;
//        cin >> y1 >> y2 >> x2;
//        needs_neg.push_back({x2, y2});
//        needs_pos.push_back({x2, y1});
//        left.push_back(y1); left.push_back(y2);
//    }
//    for (int i = 0; i < 4*N; i++) {
//        int s; cin >> s;
//        (s < 0 ? neg_slopes : pos_slopes).push_back(s);
//    }
//    
//    if (neg_slopes.size() < N || pos_slopes.size() < N) { cout << "-1\n"; return; }
//    
//    sort(all(left));
//    
//    for (int &y : left) {
//        if (needs_neg.size() < neg_slopes.size()) needs_neg.push_back({X, y});
//        else needs_pos.push_back({X, y});
//    }
//    
//    sort(all(neg_slopes));
//    sort(all(pos_slopes));
//    sort(all(needs_neg)); sort(all(needs_pos));
//    
//    ll max_y = -1, min_y = LLONG_MAX;
//    // for minimum max y
//    ll hi = 1e18 + 2e9;
//    ll lo = 0;
//    while (lo <= hi) {
//        ll mid = lo + (hi - lo)/2;
//        if (check(neg_slopes, needs_neg, mid)) {
//            max_y = mid;
//            hi = mid-1;
//        }
//        else lo = mid+1;
//    }
//    
//    // for maximum min y
//    hi = 2e9;
//    lo = -1e18 - 1000;
//    while (lo <= hi) {
//        ll mid = lo + (hi - lo)/2;
//        if (check(pos_slopes, needs_pos, mid, false)) {
//            min_y = mid;
//            lo = mid+1;
//        }
//        else hi = mid-1;
//    }
//    
//    cout << max_y - min_y << "\n";
//}
//
//int main() {
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
