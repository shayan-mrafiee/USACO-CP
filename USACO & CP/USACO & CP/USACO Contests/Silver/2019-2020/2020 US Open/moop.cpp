//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//vector<pair<int, int>> particles;
//int N, ans = 0;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("moop.in", "r", stdin);
//    freopen("moop.out", "w", stdout);
//    
//    cin >> N;
//    particles.resize(N);
//    
//    for (auto &[x, y] : particles) {
//        cin >> x >> y;
//    }
//    
//    sort(all(particles));
//    
//    vector<int> prefix(N), suffix(N);
//    prefix[0] = particles[0].second;
//    suffix.back() = particles.back().second;
//    
//    for (int i = 1; i < N; i++) prefix[i] = min(prefix[i-1], particles[i].second);
//    for (int i = N-2; i >= 0; i--) suffix[i] = max(suffix[i+1], particles[i].second);
//    
//    int ans = 1;
//    for (int i = 0; i < N-1; i++) ans += prefix[i] > suffix[i+1];
//    
//    cout << ans << "\n";
//}
