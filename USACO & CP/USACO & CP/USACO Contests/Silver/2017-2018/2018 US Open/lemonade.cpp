//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("lemonade.in", "r", stdin);
//    freopen("lemonade.out", "w", stdout);
//    
//    int N; cin >> N;
//    priority_queue<int> pq;
//    
//    while(N--) {
//        int w; cin >> w;
//        pq.push(w);
//    }
//    
//    int cows_in_line = 0;
//    while(!pq.empty()) {
//        cows_in_line += (pq.top() >= cows_in_line);
//        pq.pop();
//    }
//    
//    cout << cows_in_line << "\n";
//}
