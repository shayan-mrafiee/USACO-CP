//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.rbegin(), x.rend()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, M, K; cin >> N >> M >> K;
//    vector<pair<int, int>> weights(N);
//    
//    for (auto &[w, a] : weights) cin >> w >> a;
//    
//    sort(all(weights));
//    
//    ll ans = 0;
//    queue<pair<int, int>> q;
//    q.push({weights[0].first + K, M});
//    
//    for (auto &[w, a] : weights) {
//        int rem = a;
//        while(!q.empty() && rem && w + K <= q.front().first) {
//            int val = min(rem, q.front().second);
//            rem -= val;
//            q.front().second -= val;
//            
//            if (!q.front().second) q.pop();
//        }
//        if (a - rem) {
//            q.push({w, a - rem});
//            ans += a - rem;
//        }
//    }
//    
//    cout << ans << "\n";
//}
