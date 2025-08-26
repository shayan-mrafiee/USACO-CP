//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//struct Customer {
//    int a, b;
//    
//    bool operator<(const Customer &other) const {
//        return a < other.a;
//    }
//};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    vector<pair<Customer, int>> customers(n);
//    vector<int> ans(n);
//    
//    for (int i = 0; i < n; i++) {
//        cin >> customers[i].first.a >> customers[i].first.b;
//        customers[i].second = i;
//    }
//    
//    sort(all(customers));
//    using Room = pair<int, int>;
//    int k = 0;
//    priority_queue<Room, vector<Room>, greater<Room>> pq;
//    
//    for (auto &[c, i] : customers) {
//        if (pq.empty()) {
//            pq.push({c.b, 1});
//            ans[i] = 1;
//        }
//        else if (pq.top().first < c.a) {
//            ans[i] = pq.top().second;
//            pq.pop();
//            pq.push({c.b, ans[i]});
//        }
//        else {
//            pq.push({c.b, k+1});
//            ans[i] = k+1;
//        }
//        
//        k = max(k, (int) pq.size());
//    }
//    
//    cout << k << '\n';
//    for (int &room : ans) cout << room << " ";
//}
