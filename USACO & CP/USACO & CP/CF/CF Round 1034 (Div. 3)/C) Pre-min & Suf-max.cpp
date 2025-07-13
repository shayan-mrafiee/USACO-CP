//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n; cin >> n;
//    vector<int> arr(n);
//    for (int &a : arr) cin >> a;
//    
//    vector<int> prefix(n), suffix(n);
//    prefix[0] = arr[0]; suffix.back() = arr.back();
//    for (int i = 1; i < n; i++) prefix[i] = min(arr[i], prefix[i-1]);
//    for (int i = n-2; i >= 0; i--) suffix[i] = max(suffix[i+1], arr[i]);
//    
//    string ans = "";
//    for (int i = 0; i < n; i++) {
//        if (arr[i] <= prefix[i] || arr[i] >= suffix[i]) ans.push_back('1');
//        else ans.push_back('0');
//    }
//    
//    cout << ans << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
