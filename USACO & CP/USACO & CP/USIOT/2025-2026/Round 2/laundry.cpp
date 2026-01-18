//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, C, W; cin >> N >> C >> W;
//    vector<int> T(N);
//    
//    for (int &i : T) cin >> i;
//    
//    sort(T.rbegin(), T.rend());
//    
//    vector<int> dry_times;
//    int mx = 0;
//    int cap = 0;
//    for (int i = 0; i < N; i++) {
//        cap++;
//        mx = max(mx, T[i]);
//        if (cap == C) {
//            dry_times.push_back(mx);
//            cap = mx = 0;
//        }
//    }
//    if (cap) dry_times.push_back(mx);
//    
//    int ans = W + dry_times.back();
//    for (int i = 0; i < dry_times.size()-1; i++) {
//        ans += max(W, dry_times[i]);
//    }
//    
//    cout << ans << "\n";
//}
