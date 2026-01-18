//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    int N, M; cin >> N >> M;
//    
//    vector<int> l(N), r(N);
//    vector<vector<int>> constraints(M);
//    vector<bool> chosen(N);
//    vector<ll> a(N);
//    int ans = 0;
//    
//    for (int &i : l) cin >> i;
//    for (int &i : r) cin >> i;
//    for (vector<int>& v : constraints) {
//        int x, y, z;
//        cin >> x >> y >> z;
//        x--; y--;
//        if (chosen[x] && a[x] != z/2)
//            ans = -1;
//        a[x] = z/2;
//        chosen[x] = true;
//    }
//    
//    if (ans == -1) {
//        cout << "-1\n";
//        return;
//    }
//    
//    for (int i = 0; i < N; i++) {
//        if (!chosen[i])
//            a[i] = l[i];
//        ans += a[i] >= l[i] && a[i] <= r[i];
//    }
//    
//    cout << ans << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
