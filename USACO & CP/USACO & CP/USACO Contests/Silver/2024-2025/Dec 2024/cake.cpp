//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int N; cin >> N;
//    vector<ll> cakes(N);
//    
//    for (ll &i : cakes) cin >> i;
//    
//    ll b = accumulate(all(cakes), 0LL), e = 0;
//    vector<ll> left = vector<ll>(cakes.begin(), cakes.begin()+N/2-1),
//    right = vector<ll>(cakes.end()-N/2+1, cakes.end());
//    reverse(all(right));
//    
//    left.insert(left.begin(), 0);
//    right.insert(right.begin(), 0);
//    for (int i = 1; i <= N/2-1; i++) {
//        left[i] += left[i-1];
//        right[i] += right[i-1];
//    }
//    
//    for (int i = 0; i <= N/2-1; i++) {
//        e = max(e, left[i] + right[N/2-1-i]);
//    }
//    
//    cout << b-e << " " << e << "\n";
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
