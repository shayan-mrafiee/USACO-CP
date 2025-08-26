//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//#define x first
//#define y second
//
//int n = 0;
//vector<bool> visited;
//vector<pair<int, int>> cows;
//
//int dist(pair<int, int> a, pair<int, int> b) {
//    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
//}
//
//void dfs(int u, int X) {
//    if (visited[u]) return;
//    
//    visited[u] = true;
//    n++;
//    
//    for (int v = 0; v < cows.size(); v++) {
//        if (!visited[v] && dist(cows[u], cows[v]) <= X) dfs(v, X);
//    }
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("moocast.in", "r", stdin);
//    freopen("moocast.out", "w", stdout);
//    
//    int N; cin >> N;
//    cows.resize(N);
//    
//    int min_x = 2e5, min_y = 2e5, max_x = -1, max_y = -1;
//    for (auto &[x, y] : cows) {
//        cin >> x >> y;
//        min_x = min(x, min_x);
//        max_x = max(x, max_x);
//        min_y = min(y, min_y);
//        max_y = max(y, max_y);
//    }
//    
//    auto check = [=](const int &X) {
//        visited = vector<bool>(N);
//        n = 0;
//        dfs(0, X);
//        return (n == N);
//    };
//    
//    int lo = 1, hi = (max_x - min_x)*(max_x - min_x) + (max_y - min_y)*(max_y - min_y), ans = hi;
//    while(lo <= hi) {
//        int X = lo + (hi - lo)/2;
//        bool ok = check(X);
//        
//        if (ok) {
//            hi = X-1;
//            ans = X;
//        }
//        else lo = X+1;
//    }
//    
//    cout << ans << "\n";
//}
