//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<int> sz;
//set<int> unvisited;
//map<pair<int, int>, int> no_edge;
//
//void dfs(int u) {
//    sz.back()++;
//    
//    auto it = unvisited.begin();
//    while(it != unvisited.end()) {
//        if (no_edge[make_pair(min(u, *it), max(u, *it))]) {
//            it++;
//            continue;
//        }
//        
//        int last = *it;
//        unvisited.erase(it);
//        dfs(last);
//        it = unvisited.upper_bound(last);
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n, m; cin >> n >> m;
//    
//    for (int i = 0; i < n; i++) {
//        unvisited.insert(i);
//    }
//    
//    while(m--) {
//        int x, y; cin >> x >> y;
//        no_edge[make_pair(min(--x, --y), max(x, y))] = true;
//    }
//    
//    auto it = unvisited.begin();
//    while(it != unvisited.end()) {
//        sz.push_back(0);
//        int last = *it;
//        unvisited.erase(it);
//        dfs(last);
//        it = unvisited.upper_bound(last);
//    }
//    
//    cout << sz.size() << "\n";
//    sort(all(sz));
//    for (int i : sz) cout << i << " ";
//    cout << "\n";
//}
