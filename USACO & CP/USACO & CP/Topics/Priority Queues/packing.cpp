//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Ball {
//    int L, R;
//    
//    bool operator<(const Ball &other) const {
//        return R > other.R;
//    }
//};
//
//void solve() {
//    int N; cin >> N;
//    vector<Ball> balls(N);
//    
//    for (auto &[L, R] : balls) cin >> L >> R;
//    
//    sort(all(balls), [](const Ball &a, const Ball &b) {
//        return a.L < b.L;
//    });
//    
//    priority_queue<Ball> pq;
//    int i = 0, cur_box = 0;
//    
//    while(i < N || !pq.empty()) {
//        if (pq.empty()) {
//            cur_box = balls[i].L;
//        }
//        while(i < N && balls[i].L <= cur_box && balls[i].R >= cur_box) pq.push(balls[i++]);
//        
//        if (!pq.empty()) {
//            if (cur_box > pq.top().R) {
//                cout << "No\n";
//                return;
//            }
//            
//            pq.pop();
//            cur_box++;
//        }
//    }
//    
//    cout << "Yes\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
