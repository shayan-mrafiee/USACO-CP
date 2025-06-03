//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void solve() {
//    int N, A, B, stars = 0; cin >> N >> A >> B;
//    vector<string> sky (N);
//    vector<vector<bool>> hasTo (N, vector<bool>(N, false));
//    for (int i = 0; i < N; i++) {
//        cin >> sky[i];
//        for (char c : sky[i]) stars += (c != 'W') ? 1 : 0;
//    }
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            if (sky[i][j] == 'W') continue;
//            if (sky[i][j] == 'B') {
//                if (i-B < 0 || j - A < 0 || sky[i-B][j-A] == 'W') {
//                    cout << -1 << endl;
//                    return;
//                }
//                else hasTo[i-B][j-A] = true;
//            }
//        }
//    }
//    
//    for (int i = N-1; i >= 0; i--) {
//        for (int j = N-1; j >= 0; j--) {
//            if (sky[i][j] == 'W' || sky[i][j] == 'B' || hasTo[i][j]) continue;
//            if ((A > 0 || B > 0) && (i - B >= 0 && j - A >= 0 && sky[i-B][j-A] != 'W')) {
//                stars--;
//                hasTo[i-B][j-A] = true;
//            }
//        }
//    }
//    
//    cout << stars << endl;
//}
//
//int main() {
//    int T; cin >> T;
//    for (int i = 0; i < T; i++)
//        solve();
//}
