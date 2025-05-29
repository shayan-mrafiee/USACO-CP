//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int n; cin >> n;
//    vector<int> a(n);
//    for (int &i : a) cin >> i;
//    
//    int arrays = 1;
//    for (int i = 1; i < n-1; i++) {
//        if (a[i] == a[i+1]) a[i] = a[i-1];
//        else if (a[i+1] - a[i-1] == 2) a[i] = a[i-1];
//        arrays += (a[i] - a[i-1] >= 2);
//    }
//    
//    if (n >= 2 && a[n-1] - a[n-2] >= 2) arrays++;
//    
//    cout << arrays << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
