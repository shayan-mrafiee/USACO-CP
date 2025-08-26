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
//    int x, n; cin >> x >> n;
//    priority_queue<int, vector<int>, greater<int>> d;
//    
//    for (int i = 0; i < n; i++) {
//        int length; cin >> length;
//        d.push(length);
//    }
//    
//    ll cost = 0;
//    while(d.size() > 1) {
//        int combined = d.top();
//        d.pop();
//        combined += d.top();
//        d.pop();
//        
//        cost += combined;
//        d.push(combined);
//    }
//    
//    cout << cost << "\n";
//}
