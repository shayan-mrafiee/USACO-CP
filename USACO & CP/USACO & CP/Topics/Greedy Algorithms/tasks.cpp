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
//    vector<pair<int, int>> tasks(n);
//    
//    for (auto &[a, d] : tasks) cin >> a >> d;
//    
//    sort(all(tasks));
//    
//    ll time = 0, reward = 0;
//    
//    for (auto &[a, d] : tasks) {
//        time += a;
//        reward += (ll) d - time;
//    }
//    
//    cout << reward << "\n";
//}
