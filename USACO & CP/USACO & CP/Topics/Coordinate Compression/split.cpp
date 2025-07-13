//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//#define x first
//#define y second
//
//int main() {
//    freopen("split.in", "r", stdin);
//    freopen("split.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<pair<int, int>> cows(N);
//    for (auto &[x, y] : cows) cin >> x >> y;
//    
//    sort(all(cows));
//    
//    vector<pair<int, int>> prefix_y(N), suffix_y(N);
//    prefix_y[0] = {cows[0].y, cows[0].y};
//    suffix_y.back() = {cows.back().y, cows.back().y};
//    
//    for (int i = 1; i < N; i++) {
//        prefix_y[i].first = min(prefix_y[i-1].first, cows[i].y);
//        prefix_y[i].second = max(prefix_y[i-1].second, cows[i].y);
//    }
//    for (int i = N-2; i >= 0; i--) {
//        suffix_y[i].first = min(suffix_y[i+1].first, cows[i].y);
//        suffix_y[i].second = max(suffix_y[i+1].second, cows[i].y);
//    }
//    
//    ll area = (ll) (prefix_y.back().second - prefix_y.back().first) * (cows.back().x - cows[0].x), initial = area;
//    for (int i = 0; i < N-1; i++) {
//        ll fence1 = (ll) (cows[i].x - cows[0].x) * (prefix_y[i].second - prefix_y[i].first),
//        fence2 = (ll) (cows.back().x - cows[i+1].x) * (suffix_y[i+1].second - suffix_y[i+1].first);
//        area = min(area, fence1 + fence2);
//    }
//    
//    sort(all(cows), [](const pair<int, int> &a, const pair<int, int> &b) {
//        return a.y < b.y;
//    });
//    
//    vector<pair<int, int>> prefix_x(N), suffix_x(N);
//    prefix_x[0] = {cows[0].x, cows[0].x};
//    suffix_x.back() = {cows.back().x, cows.back().x};
//    
//    for (int i = 1; i < N; i++) {
//        prefix_x[i].first = min(prefix_x[i-1].first, cows[i].x);
//        prefix_x[i].second = max(prefix_x[i-1].second, cows[i].x);
//    }
//    for (int i = N-2; i >= 0; i--) {
//        suffix_x[i].first = min(suffix_x[i+1].first, cows[i].x);
//        suffix_x[i].second = max(suffix_x[i+1].second, cows[i].x);
//    }
//    
//    for (int i = 0; i < N-1; i++) {
//        ll fence1 = (ll) (cows[i].y - cows[0].y) * (prefix_x[i].second - prefix_x[i].first),
//        fence2 = (ll) (cows.back().y - cows[i+1].y) * (suffix_x[i+1].second - suffix_x[i+1].first);
//        area = min(area, fence1 + fence2);
//    }
//    
//    cout << initial - area << "\n"; 
//}
