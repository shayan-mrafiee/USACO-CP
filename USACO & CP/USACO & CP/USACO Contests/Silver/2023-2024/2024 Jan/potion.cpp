//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<vector<int>> adj;
//vector<int> potions_at;
//int leaves = 0, ans = 0;
//
//stack<int> s;
//void dfs(int u, int p = -1) {
//    for (int i = 0; i < potions_at[u]; i++)
//        s.push(u);
//    
//    bool is_leaf = true;
//    for (int v : adj[u]) {
//        if (v != p) {
//            is_leaf = false;
//            dfs(v, u);
//        }
//    }
//    
//    if (is_leaf) {
//        leaves++;
//        ans += !s.empty();
//        if (!s.empty()) s.pop();
//    }
//    
//    while (!s.empty() && s.top() == u) s.pop();
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    // min # traversals = # leaves
//    // max # potions = # leaves
//    // bc each traversal yields at most 1 potion
//    
//    int N; cin >> N;
//    adj.resize(N);
//    potions_at.resize(N);
//    vector<int> potions(N);
//    
//    for (int &i : potions) {
//        cin >> i; i--;
//    }
//    
//    for (int i = 1; i < N; i++) {
//        int a, b; cin >> a >> b;
//        adj[--a].push_back(--b);
//        adj[b].push_back(a);
//    }
//    
//    dfs(0);
//    for (int i = 0; i < leaves; i++) {
//        potions_at[potions[i]]++;
//    }
//    
//    ans = leaves = 0;
//    dfs(0);
//    
//    cout << ans << "\n";
//}
