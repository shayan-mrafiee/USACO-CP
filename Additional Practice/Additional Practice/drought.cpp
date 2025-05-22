//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    int N; cin >> N;
//    vector<int> h (N+1);
//    ll bags = 0;
//    for (int i = 1; i <= N; i++)
//        cin >> h[i];
//    
//    for (int i = 1; i < N; i++) {
//        if (h[i] < h[i+1]) {
//            if (i + 2 > N) {
//                cout << -1 << endl;
//                return;
//            }
//            
//            ll dif = h[i+1] - h[i];
//            h[i+1] -= dif; h[i+2] -= dif;
//            if (h[i+2] < 0) {
//                cout << -1 << endl;
//                return;
//            }
//            bags += 2*dif;
//        }
//        
//        else if (h[i] > h[i+1]) {
//            if (i % 2 == 1) {
//                cout << -1 << endl;
//                return;
//            }
//            ll dif = h[i] - h[i+1];
//            bags += i * dif;
//        }
//    }
//    
//    cout << bags << endl; 
//}
//
//int main() {
//    
//    int T; cin >> T;
//    for (int i = 0; i < T; i++)
//        solve();
//}
