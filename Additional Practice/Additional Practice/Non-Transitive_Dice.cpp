//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool beats(vector<int> a, vector<int> b) {
//    int aWins = 0, bWins = 0;
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            aWins += (a[i] > b[j]) ? 1 : 0;
//            bWins += (b[j] > a[i]) ? 1 : 0;
//        }
//    }
//    return aWins > bWins;
//}
//
//void solve() {
//    vector<int> A (4), B (4), C (4);
//    bool aBitsB;
//    int aWins = 0, bWins = 0;
//    for (int i = 0; i < 4; i++)
//        cin >> A[i];
//    for (int i = 0; i < 4; i++)
//        cin >> B[i];
//    
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            aWins += (A[i] > B[j]) ? 1 : 0;
//            bWins += (B[j] > A[i]) ? 1 : 0;
//        }
//    }
//    
//    //cout << chance_A << endl;
//    
//    aBitsB = (aWins > bWins);
//    
//    //cout << "aBitsB = " << aBitsB << endl;
//    
//    for (int i = 1; i <= 10; i++) {
//        for (int j = i; j <= 10; j++) {
//            for (int h = j; h <= 10; h++) {
//                for (int k = h; k <= 10; k++) {
//                    //cout << i << " " << j << " " << h << ' ' << k << endl;
//                    C = {i, j, h, k};
//                    if ((aBitsB && beats(C, A) && beats(B, C)) || (!aBitsB && beats(A, C) && beats(C, B))) {
//                        cout << "yes\n";
//                        return;
//                    }
//                }
//            }
//        }
//    }
//    
//    cout << "no\n";
//}
//
//int main() {
//    //freopen("reduce.in", "r", stdin);
//    int T; cin >> T;
//    
//    for (int i  = 0; i < T; i++)
//        solve();
//}
