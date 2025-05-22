//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    int n, m; cin >> n >> m;
//    ll chips = 0;
//    vector<vector<int>> hand (m, vector<int>(n));
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++)
//            cin >> hand[j][i];
//    }
//    
//    for (vector<int> v : hand) {
//        sort(v.begin(), v.end());
//        ll last = 0;
//        for (int i = 0; i < n-1; i++) {
//            last += n - 2*i - 1;
//            chips += last * (v[i+1] - v[i]);
//        }
//    }
//    
//    cout << chips << endl;
//}
//
//int main() {
//    int T; cin >> T;
//    for (int i = 0; i < T; i++)
//        solve();
//}
