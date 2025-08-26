//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    priority_queue<int, vector<int>, greater<int>> pq;
//    
//    ll max_score = 0;
//    for (int i = 0; i < n; i++) {
//        int a; cin >> a;
//        max_score += a;
//        pq.push(a);
//        
//        if (i & 1) {
//            max_score -= pq.top();
//            pq.pop();
//        }
//    }
//    
//    cout << max_score << "\n";
//}
