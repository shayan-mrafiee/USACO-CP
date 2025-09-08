//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int parent[200001], cnt[200001] = {}, n;
//vector<int> adj[200001];
//
//void dfs(int u) {
//    for (int v : adj[u]) {
//        if (v != parent[u]) {
//            cnt[u]++;
//            dfs(v);
//            cnt[u] += cnt[v];
//        }
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    cin >> n;
//    parent[0] = -1;
//    
//    for (int i = 1; i < n; i++) {
//        cin >> parent[i];
//        adj[--parent[i]].push_back(i);
//    }
//    
//    dfs(0);
//    
//    for (int i = 0; i < n; i++) {
//        cout << cnt[i] << " ";
//    }
//    cout << "\n";
//}
