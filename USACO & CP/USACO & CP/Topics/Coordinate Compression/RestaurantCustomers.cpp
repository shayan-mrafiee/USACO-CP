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
//    vector<pair<int, int>> times;
//    for (int i = 0; i < n; i++) {
//        int a, b; cin >> a >> b;
//        times.push_back({a, 1});
//        times.push_back({b, -1});
//    }
//    
//    sort(all(times));
//    for (int i = 0; i < times.size(); i++) {
//        times[i].first = i;
//    }
//    
//    int max_customers = 0, cur_customers = 0;
//    for (pair<int, int> &p : times) {
//        cur_customers += p.second;
//        max_customers = max(max_customers, cur_customers);
//    }
//    
//    cout << max_customers << "\n";
//}
