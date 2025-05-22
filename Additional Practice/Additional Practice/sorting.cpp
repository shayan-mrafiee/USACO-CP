//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//void solve() {
//    int n; cin >> n;
//    vector<int> a (n);
//    for (int i = 0; i < n; i++) cin >> a[i];
//    pair<int, int> x = {0, 1000000000};
//    
//    for (int i = 0; i < n-1; i++) {
//        if (a[i] > a[i+1]) {
//            x.first = max(x.first, (a[i] + a[i+1] + 1)/2);
//        }
//        else {
//            x.second = min(x.second, (a[i] + a[i+1])/2);
//        }
//        
//        if (x.second < x.first) {
//            cout << -1 << endl;
//            return;
//        }
//    }
//    
//    cout << x.first << endl;
//}
//
//int main() {
//    int t; cin >> t;
//    while (t--)
//        solve();
//}
