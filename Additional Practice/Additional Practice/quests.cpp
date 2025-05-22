//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    int n, k; cin >> n >> k;
//    ll experience = 0;
//    vector<int> a (n), b (n);
//    for (int i = 0; i < n; i++) cin >> a[i];
//    for (int i = 0; i < n; i++) cin >> b[i];
//    int subsequent = b[0];
//    experience += a[0];
//    int indx = 1;
//    for (int i = 1; i < k; i++) {
//        if (indx < n && a[indx] >= subsequent) {
//            experience += a[indx];
//            subsequent = max(subsequent, b[indx]);
//            indx++;
//        }
//        else experience += subsequent;
//    }
//    
//    cout << experience << endl; 
//}
//
//int main() {
//    int t; cin >> t;
//    for (int i = 0; i < t; i++)
//        solve();
//}
