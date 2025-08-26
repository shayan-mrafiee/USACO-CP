//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<vector<pair<int, int>>> adj;
//vector<int> component;
//
//void dfs(int u, int x, int c) {
//    component[u] = c;
//    for (auto &[v, w] : adj[u]) {
//        if (component[v] == -1 && w >= x) dfs(v, x, c);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("wormsort.in", "r", stdin);
//    freopen("wormsort.out", "w", stdout);
//    
//    int N, M; cin >> N >> M;
//    int lo = 2e9, hi = -1;
//    vector<int> p(N);
//    adj.resize(N);
//    bool is_sorted = true;
//    
//    for (int i = 0; i < N; i++) {
//        cin >> p[i];
//        is_sorted &= (p[i] == i+1);
//    }
//    
//    while(M--) {
//        int a, b, w; cin >> a >> b >> w;
//        adj[a-1].push_back({b-1, w});
//        adj[b-1].push_back({a-1, w});
//        hi = max(hi, w); lo = min(lo, w);
//    }
//    
//    if (is_sorted) {
//        cout << "-1\n";
//        return 0;
//    }
//    
//    auto check = [&](int x) {
//        component = vector<int>(N, -1);
//        for (int i = 0; i < N; i++) {
//            if (component[i] == -1) dfs(i, x, i);
//            if (component[i] != component[p[i]-1]) return false;
//        }
//        return true;
//    };
//    
//    int ans = -1;
//    while(lo <= hi) {
//        int x = lo + (hi - lo)/2;
//        if (check(x)) {
//            ans = x;
//            lo = x+1; 
//        }
//        else hi = x-1;
//    }
//    
//    cout << ans << "\n";
//}
