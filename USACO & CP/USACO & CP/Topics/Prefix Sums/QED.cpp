//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int n, q; cin >> n >> q;
//    
//    vector<int> p(n); string s;
//    for (int &i : p) cin >> i;
//    cin >> s;
//    
//    vector<int> diff(n+1);
//    for (int i = 0; i < n; i++) {
//        diff[min(i, p[i]-1)]++;
//        diff[max(i, p[i]-1)]--;
//    }
//    
//    for (int i = 1; i < n; i++) diff[i] += diff[i-1];
//    
//    set<int> changes_needed;
//    for (int i = 0; i < n-1; i++) {
//        if (s[i] == 'L' && s[i+1] == 'R' && diff[i]) changes_needed.insert(i);
//    }
//    
//    while(q--) {
//        int i; cin >> i; i--;
//        s[i] = (s[i] == 'L') ? 'R' : 'L';
//        
//        if (s[i] == 'L' && s[i+1] == 'R' && diff[i]) changes_needed.insert(i);
//        else changes_needed.erase(i);
//        if (s[i] == 'R' && s[i-1] == 'L' && diff[i-1]) changes_needed.insert(i-1);
//        else changes_needed.erase(i-1);
//        
//        cout << ((changes_needed.size()) ? "NO\n" : "YES\n");
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
