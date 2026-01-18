//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<pair<int, int>> v[2];
//vector<int> state;
//map<int, int[2]> tastiness;
//int N, D;
//
//void dfs(int u, bool receiver) {
//    state[u] = 1;
//    if (!tastiness[u][receiver]) return;
//    
//    int i = lower_bound(all(v[receiver]), tastiness[u][receiver]); // start here
//    
//    int mn = INT32_MAX;
//    for (int v = i; v < N; v++) {
//        if (tastiness[v][receiver] > tastiness[u][receiver] + D) break;
//        dfs(v, !receiver);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("piepie.in", "r", stdin);
//    freopen("piepie.out", "w", stdout);
//    
//    cin >> N >> D;
//    state.resize(2*N);
//    
//    for (int i = 0; i < N; i++) {
//        int a, b; cin >> a >> b;
//        v[0].push_back({a, i});
//        v[1].push_back({b, i});
//        tastiness[i][0] = a;
//        tastiness[i][1] = b;
//    }
//    
//    sort(all(v[0])); sort(all(v[1]));
//    
//}
