//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int invited = 0;
//vector<bool> visited;
//vector<set<int>> contacts;
//
//void dfs(int f) {
//    if (visited[f]) return;
//    
//    invited++;
//    visited[f] = true;
//    
//    for (int i : contacts[f]) dfs(i);
//}
//
//void solve(int p, int c) {
//    contacts = vector<set<int>>(p);
//    vector<pair<int, int>> connections(c);
//    
//    for (auto &[a, b] : connections) {
//        cin >> a >> b;
//        contacts[a].insert(b);
//        contacts[b].insert(a);
//    }
//    
//    for (auto &[a, b] : connections) {
//        invited = 0;
//        visited = vector<bool>(p);
//        contacts[a].erase(b);
//        contacts[b].erase(a);
//        dfs(0);
//        if (invited < p) {
//            cout << "Yes\n";
//            return;
//        }
//        
//        contacts[a].insert(b);
//        contacts[b].insert(a);
//    }
//    
//    cout << "No\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    while(true) {
//        int p, c; cin >> p >> c;
//        if (p == c && c == 0) return 0;
//        
//        solve(p, c);
//    }
//}
