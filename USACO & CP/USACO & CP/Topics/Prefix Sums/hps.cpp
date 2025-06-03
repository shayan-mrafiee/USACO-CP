//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    freopen("hps.in", "r", stdin);
//    freopen("hps.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<vector<int>> gestures (N+1, vector<int>(3));
//    gestures[0] = {0,0,0};
//    
//    for (int i = 1; i <= N; i++) {
//        char c; cin >> c;
//        gestures[i] = gestures[i-1];
//        int indx;
//        indx = (c == 'H') ? 0 : (c == 'P') ? 1 : 2;
//        gestures[i][indx]++;
//    }
//    
//    int ans = 0;
//    
//    for (int i = 0; i <= 2; i++) {
//        for (int j = 0; j <= 2; j++) {
//            if (i == j) continue;
//            for (vector<int> v : gestures) {
//                ans = max(ans, v[i] + gestures[N][j] - v[j]);
//            }
//        }
//    }
//    
//    cout << ans << endl; 
//}
