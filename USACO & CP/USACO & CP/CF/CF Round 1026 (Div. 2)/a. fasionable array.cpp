//#include <iostream>
//
//using namespace std;
//
//void solve() {
//    int n; cin >> n;
//    vector<int> arr(n);
//    for (int &a : arr) cin >> a;
//    
//    sort(arr.begin(), arr.end());
//    
//    if ((arr[0] + arr.back()) % 2 == 0) {
//        cout << 0 << "\n";
//        return;
//    }
//    
//    int o1 = 1, o2 = 1;
//    for (int i = 1; i < n; i++, o1++) {
//        if (arr[i] % 2 == arr.back() % 2) break;
//    }
//    for (int i = n-2; i >= 0; i--, o2++) {
//        if (arr[i] % 2 == arr[0] % 2) break;
//    }
//    
//    cout << min(o1, o2) << "\n";
//}
//
//int main() {
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
