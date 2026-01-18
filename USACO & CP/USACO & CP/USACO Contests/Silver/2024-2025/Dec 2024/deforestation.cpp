//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//#define pii pair<int, int>
//
//struct Restriction {
//    int l, r, t, has;
//    
//    bool operator<(const Restriction &other) const {
//        return r < other.r;
//    }
//};
//
//
//void solve() {
//    int N, K; cin >> N >> K;
//    vector<int> trees(N);
//    vector<array<ll, 4>> events; // {l, type, r, cut}
//    // type 0 -> original tree, type -1 -> interval
//    
//    for (int &i : trees) {
//        cin >> i;
//        events.push_back({i, 0, 0, 0});
//    }
//    sort(all(trees));
//    
//    for (int i = 0; i < K; i++) {
//        int l, r, t; cin >> l >> r >> t;
//        int has = upper_bound(all(trees), r) - lower_bound(all(trees), l);
//        events.push_back({l, -1, r, has - t});
//    }
//    sort(all(events));
//    
//    int ans = 0;
//    priority_queue<pii, vector<pii>, greater<pii>> pq;
//    for (auto [l, tp, r, cut] : events) {
//        if (tp == -1)
//            pq.push({ans + cut, r});
//        else {
//            while (!pq.empty() && pq.top().second < l) {
//                pq.pop();
//            }
//            if (pq.empty() || ans < pq.top().first)
//                ans++;
//        }
//    }
//    
//    cout << ans << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
