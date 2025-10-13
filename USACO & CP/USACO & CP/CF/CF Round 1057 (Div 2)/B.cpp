//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int xyz[3]; cin >> xyz[0] >> xyz[1] >> xyz[2];
//    int abc[3] = {};
//    
//    for (int i = 0; i < 3; i++) {
//        abc[i] |= xyz[i];
//        abc[(i + 1) % 3] |= xyz[i];
//    }
//    
//    for (int i = 0; i < 3; i++) {
//        if ((abc[i] & abc[(i + 1) % 3]) != xyz[i]) {
//            cout << "NO\n";
//            return;
//        }
//    }
//    
//    cout << "YES\n";
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
