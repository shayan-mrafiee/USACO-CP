//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//using pvl = pair<vector<int>, ll>;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    vector<pvl> waypoints(N);
//    waypoints[0].first.resize(11);
//    
//    for (int i = 1; i < N; i++) {
//        int p, d, e;
//        cin >> p >> d >> e;
//        waypoints[i] = waypoints[--p];
//        waypoints[i].second += e;
//        waypoints[i].first.push_back(d);
//        sort(all(waypoints[i].first));
//        waypoints[i].first.erase(waypoints[i].first.begin());
//    }
//    
//    sort(all(waypoints));
//    
//    
//    vector<ll> max_enjoyment(N);
//    max_enjoyment[0] = waypoints[0].second;
//    for (int i = 1; i < N; i++) {
//        max_enjoyment[i] = max(waypoints[i].second, max_enjoyment[i-1]);
//    }
//    
//    auto find_max_enjoyment = [&](int s, int c) {
//        int l = 1, r = N-1;
//        ll ans = 0;
//        while (l <= r) {
//            int m = l + (r - l)/2;
//            vector<int>& d = waypoints[m].first;
//            int idx = upper_bound(all(d), s) - d.begin();
//            if (d.size() - idx > c) {
//                r = m-1;
//            }
//            else {
//                l = m+1;
//                ans = max_enjoyment[m];
//            }
//        }
//        return ans; 
//    };
//    
//    int M; cin >> M;
//    while (M--) {
//        int s, c;
//        cin >> s >> c;
//        cout << find_max_enjoyment(s, c) << "\n";
//    }
//}
