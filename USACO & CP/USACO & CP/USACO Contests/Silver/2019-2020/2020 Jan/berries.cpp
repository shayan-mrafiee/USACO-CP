//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int share_bessie(int K, int max_berry, priority_queue<int> berries) {
//    priority_queue<int, vector<int>, greater<int>> baskets;
//    while(baskets.size() < K) {
//        int b = min(max_berry, berries.top());
//        for (int i = 0; i < berries.top()/b && baskets.size() < K; i++) baskets.push(b);
//        if (berries.top() % b) berries.push(berries.top() % b);
//        berries.pop();
//    }
//    
//    int bessie = 0;
//    while(baskets.size() > K/2) {
//        bessie += baskets.top();
//        baskets.pop();
//    }
//    
//    return bessie;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("berries.in", "r", stdin);
//    freopen("berries.out", "w", stdout);
//    
//    int N, K; cin >> N >> K;
//    priority_queue<int> berries;
//    
//    for (int i = 0; i < N; i++) {
//        int B; cin >> B;
//        berries.push(B);
//    }
//    
//    int ans = -1;
//    for (int B = 1; B < berries.top(); B++) {
//        ans = max(ans, share_bessie(K, B, berries));
//    }
//    
//    cout << ans << "\n";
//}
