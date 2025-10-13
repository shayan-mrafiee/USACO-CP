//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//vector<int> succ;
//vector<int> comp;
//int id = 0;
//
//void dfs(int u) {
//    comp[u] = id;
//    int &v = succ[u];
//    
//    if (comp[v] == -1) dfs(v);
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, K; cin >> N >> K;
//    vector<int> order(N);
//    vector<pair<int, int>> sequence(K);
//    map<int, set<int>> positions;
//    succ.resize(N);
//    comp = vector<int>(N, -1);
//    
//    for (int i = 0; i < N; i++) order[i] = i;
//    
//    for (auto &[a, b] : sequence) {
//        cin >> a >> b;
//        swap(order[--a], order[--b]);
//    }
//    
//    for (int i = 0; i < N; i++) succ[i] = order[i];
//    
//    for (int i = 0; i < N; i++) {
//        if (comp[i] == -1) {
//            dfs(i); id++;
//        }
//    }
//    
//    for (int i = 0; i < N; i++) {
//        order[i] = i;
//        positions[comp[i]].insert(i);
//    }
//    
//    for (auto &[a, b] : sequence) {
//        swap(order[a], order[b]);
//        positions[comp[order[a]]].insert(a);
//        positions[comp[order[b]]].insert(b);
//    }
//    
//    for (int &i : comp) {
//        cout << positions[i].size() << "\n";
//    }
//}
