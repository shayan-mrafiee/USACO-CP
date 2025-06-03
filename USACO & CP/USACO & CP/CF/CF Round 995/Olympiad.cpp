//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void solve() {
//    int n; cin >> n;
//    vector<int> a (n), b (n);
//    int dif = 0;
//    for (int i = 0; i < n; i++) cin >> a[i];
//    int trash; cin >> trash;
//    for (int i = 0; i < n-1; i++) cin >> b[i];
//    b[n-1] = 0;
//    
//    for (int i = 0; i < n; i++) {
//        dif += (a[i] - b[i] > 0) ? a[i] - b[i] : 0;
//    }
//    
//    cout << dif << endl;
//}
//
//int main() {
//    int t; cin >> t;
//    for (int i = 0; i < t; i++)
//        solve();
//}
