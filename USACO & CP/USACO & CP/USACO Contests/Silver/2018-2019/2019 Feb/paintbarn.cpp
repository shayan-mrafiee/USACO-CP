//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//const int maxN = 1001;
//int barn[maxN][maxN] = {};
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("paintbarn.in", "r", stdin);
//    freopen("paintbarn.out", "w", stdout);
//    
//    int N, K; cin >> N >> K;
//    
//    while(N--) {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        barn[x1][y1]++;
//        barn[x2][y1]--;
//        barn[x1][y2]--;
//        barn[x2][y2]++;
//    }
//    
//    int ans = 0;
//    for (int i = 0; i < maxN; i++) {
//        for (int j = 0; j < maxN; j++) {
//            if (i) barn[i][j] += barn[i-1][j];
//            if (j) barn[i][j] += barn[i][j-1];
//            if (i && j) barn[i][j] -= barn[i-1][j-1];
//            ans += (barn[i][j] == K);
//        }
//    }
//    
//    cout << ans << "\n";
//}
