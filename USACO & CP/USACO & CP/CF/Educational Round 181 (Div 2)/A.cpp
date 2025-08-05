//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    string s; cin >> s;
//    
//    vector<int> times(26);
//    
//    for (char &c : s) times[c - 'A']++;
//    string ans(times['T' - 'A'], 'T');
//    times['T' - 'A'] = 0;
//    
//    for (int i = 0; i < 26; i++) {
//        ans.append(string(times[i], i + 'A'));
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
