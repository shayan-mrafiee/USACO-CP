//#include <bits/stdc++.h>
//using namespace std;
//
//const int maxN = 1002;
//
//int main() {
//    freopen("paintbarn.in", "r", stdin);
//    freopen("paintbarn.out", "w", stdout);
//    
//    int N, K;
//    cin >> N >> K;
//    
//    vector<vector<int>> dif_array(maxN, vector<int>(maxN, 0));
//    
//    while (N--) {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        dif_array[x1][y1]++;
//        dif_array[x2][y1]--;
//        dif_array[x1][y2]--;
//        dif_array[x2][y2]++;
//    }
//
//    int ans = 0;
//    for (int i = 0; i < maxN; i++) {
//        for (int j = 0; j < maxN; j++) {
//            if (i > 0) dif_array[i][j] += dif_array[i - 1][j];
//            if (j > 0) dif_array[i][j] += dif_array[i][j - 1];
//            if (i > 0 && j > 0) dif_array[i][j] -= dif_array[i - 1][j - 1];
//            ans += (dif_array[i][j] == K);
//        }
//    }
//    
//    cout << ans << "\n";
//}
