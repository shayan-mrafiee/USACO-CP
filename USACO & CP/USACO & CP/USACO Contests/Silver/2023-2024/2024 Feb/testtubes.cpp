//#include <bits/stdc++.h>
//
//using namespace std;
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int N, P; cin >> N >> P;
//    string f, s; cin >> f >> s;
//    
//    f.erase(unique(all(f)), f.end());
//    s.erase(unique(all(s)), s.end());
//    int M = f.size() + s.size() - 2 + (f[0] == s[0]);
//    M += (M > 1);
//    
//    cout << M << "\n";
//    if (!M || P == 1) return;
//    
//    if (M == 1) cout << (f[0] == f.back() ? "2 1\n" : "1 2\n");
//    else if (f[0] != s[0]) {
//        if (f.size() == 1) {
//            for (int i = s.size()-1; i >= 1; i--) {
//                if (s[i] == f[0]) cout << "2 1\n";
//                else {
//                    cout << "2 3\n";
//                    //if (f.back() != s[i]) f.push_back(s[i]);
//                }
//            }
//            
//            cout << "3 2\n";
//        }
//        else if (s.size() == 1) {
//            for (int i = f.size()-1; i >= 1; i--) {
//                if (f[i] == s[0]) cout << "1 2\n";
//                else cout << "1 3\n";
//            }
//            cout << "3 1\n";
//        }
//        else {
//            if (f.back() == f[0] && f.size() != 1) {
//                cout << "1 3\n";
//                f.pop_back();
//            }
//            // step 1: move f[0]s from 2 to 3 and s[0]s from 2 to 1
//            for (int i = s.size()-1; i >= 1; i--) {
//                if (s[i] == f[0]) cout << "2 3\n";
//                else {
//                    cout << "2 1\n";
//                    //if (f.back() != s[i]) f.push_back(s[i]);
//                }
//            }
//            
//            // step 2: move s[0]s from 1 to 2 and f[0]s from 1 to 3
//            for (int i = f.size()-1; i >= 1; i--) {
//                if (f[i] == f[0]) cout << "1 3\n";
//                else cout << "1 2\n";
//            }
//            
//            // step 3: pour 3 to 1
//            cout << "3 1\n";
//        }
//    }
//    else {
//        if (f.size() == 1) {
//            for (int i = s.size()-1; i >= 0; i--) {
//                if (s[i] == f[0]) cout << "2 1\n";
//                else cout << "2 3\n";
//            }
//            cout << "3 2\n";
//        }
//        else if (s.size() == 1) {
//            for (int i = f.size()-1; i >= 0; i--) {
//                if (f[i] == s[0]) cout << "1 2\n";
//                else cout << "1 3\n";
//            }
//            cout << "3 1\n";
//        }
//        else {
//            char target = f[0] % 2 + 1 + '0';
//            if (f.back() == target && f.size() != 1) {
//                cout << "1 3\n";
//                f.pop_back();
//            }
//            // we're moving all target to test tube 1 at the end
//            for (int i = s.size()-1; i >= 1; i--) {
//                if (s[i] == target) cout << "2 3\n";
//                else {
//                    cout << "2 1\n";
//                    //if (f.back() != s[i]) f.push_back(s[i]);
//                }
//            }
//            for (int i = f.size()-1; i >= 0; i--) {
//                if (f[i] == target) cout << "1 3\n";
//                else cout << "1 2\n";
//            }
//            cout << "3 1\n";
//        }
//    }
//}
//
//int main() {
//    //freopen("input.in", "r", stdin); 
//    int T; cin >> T;
//    while(T--) solve();
//}
