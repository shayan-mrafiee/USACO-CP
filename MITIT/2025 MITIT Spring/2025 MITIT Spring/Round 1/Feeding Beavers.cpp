//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int N; string c;
//    cin >> N >> c;
//    vector<int> even, odd;
//    vector<pair<int, int>> satisfaction (N);
//    
//    for (int i = 1; i <= N; i++) {
//        even.push_back(i * 2);
//        odd.push_back(i * 2 - 1);
//    }
//    
//    for (int i = N-1; i >= 0; i--) {
//        if (c[i] == 'E') {
//            if (odd.size() < 2 && even.size() < 2) {
//                cout << "NO\n";
//                return;
//            }
//            if ((even.size() >= 2 && odd.size() < 2) || (even.size() >= 2 && even.back() + even[even.size()-2] > odd.back() + odd[odd.size()-2])) {
//                satisfaction[i] = {even.back(), even[even.size()-2]};
//                even.pop_back(); even.pop_back();
//            }
//            else {
//                satisfaction[i] = {odd.back(), *(odd.end()-2)};
//                odd.pop_back(), odd.pop_back();
//            }
//        }
//        else {
//            if (odd.empty() || even.empty()) {
//                cout << "NO\n"; return;
//            }
//            
//            satisfaction[i] = {odd.back(), even.back()};
//            odd.pop_back(); even.pop_back();
//        }
//    }
//    
//    cout << "YES\n";
//    for (pair<int, int> p : satisfaction) {
//        cout << p.first << " " << p.second << endl;
//    }
//}
//
//int main() {
//    int T; cin >> T;
//    while(T--)
//        solve();
//}
