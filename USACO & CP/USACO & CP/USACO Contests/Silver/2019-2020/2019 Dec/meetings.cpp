//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Cow {
//    int w, x, d;
//    
//    bool operator<(const Cow &other) const {
//        return x < other.x;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("meetings.in", "r", stdin);
//    freopen("meetings.out", "w", stdout);
//    
//    int N, L; cin >> N >> L;
//    vector<Cow> cows(N);
//    vector<int> right_cows, left_cows;
//    vector<pair<int, int>> time_weight;
//    int total_weight = 0, T = 0;
//    
//    for (auto &[w, x, d] : cows) {
//        cin >> w >> x >> d;
//        total_weight += w;
//    }
//    
//    sort(all(cows));
//    
//    for (int i = 0; i < N; i++) {
//        (cows[i].d == 1 ? right_cows : left_cows).push_back(cows[i].x);
//    }
//    for (int i = 0; i < left_cows.size(); i++) {
//        time_weight.push_back({left_cows[i], cows[i].w});
//    }
//    for (int i = 0; i < right_cows.size(); i++) {
//        time_weight.push_back({L - right_cows[i], cows[i + left_cows.size()].w});
//    }
//    
//    sort(all(time_weight));
//    
//    for (auto [t, w] : time_weight) {
//        if (total_weight <= 0) break;
//        T = t;
//        total_weight -= 2*w;
//    }
//    
//    ll ans = 0;
//    for (int l : left_cows) {
//        for (int r : right_cows) {
//            if (r > l) break;
//            ans += (l - r <= 2*T);
//        }
//    }
//    
//    cout << ans << "\n";
//}
