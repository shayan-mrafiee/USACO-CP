//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n; cin >> n;
//    int mod[4] = {};
//    for (int i = 0; i < n; i++)
//        mod[i % 4]++;
//    
//    for (int i = 0; i < 4; i++) {
//        if (mod[i] > mod[3-i]) {
//            cout << "Alice\n";
//            return;
//        }
//    }
//    
//    cout << "Bob\n";
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
