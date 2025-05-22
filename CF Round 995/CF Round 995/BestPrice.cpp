//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void solve() {
//    int n, k; cin >> n >> k;
//    vector<pair<int, int>> customers (n);
//    int negReviews = 0;
//    for (int i = 0; i < n; i++) {
//        int a; cin >> a;
//        customers[i].first = a;
//    }
//    for (int i = 0; i < n; i++) {
//        int b; cin >> b;
//        customers[i].second = b;
//    }
//    
//    sort(customers.begin(), customers.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
//        return a.second < b.second;
//    });
//    
//    
//}
//
//int main() {
//    int t; cin >> t;
//    for (int i = 0; i < t; i++) solve();
//}
