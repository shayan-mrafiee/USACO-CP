//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int n; cin >> n;
//    vector<int> beauty(n), prefix(n), suffix(n);
//    
//    for (int i = 0; i < n; i++) {
//        cin >> beauty[i];
//        prefix[i] = beauty[i] + i;
//        suffix[i] = beauty[i] - i;
//    }
//    
//    for (int i = 0; i < n; i++) {
//        prefix[i] = beauty[i] + i;
//        suffix[i] = beauty[i] - i;
//    }
//
//    for (int i = 1; i < n; i++) { prefix[i] = max(prefix[i], prefix[i - 1]); }
//    for (int i = n - 2; i >= 0; i--) {
//        suffix[i] = max(suffix[i], suffix[i + 1]);
//    }
//    
//    int ans = 0;
//    
//    for (int i = 1; i < n-1; i++) {
//        ans = max(ans, beauty[i] + prefix[i-1] + suffix[i+1]);
//    }
//    
//    cout << ans << endl;
//}
//
//int main() {
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
