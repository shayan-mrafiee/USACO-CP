//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int N; cin >> N;
//    vector<vector<int>> a (N, vector<int>(N));
//    int beauty_r = 0, beauty_c = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++)
//            cin >> a[i][j];
//    }
//    
//    for (int i = 0; i < N; i++) {
//        int even = 0, odd = 0;
//        for (int j = 0; j < N; j += 2)
//            even += a[i][j];
//        for (int j = 1; j < N; j += 2)
//            odd += a[i][j];
//        beauty_r += max(even, odd);
//    }
//    
//    for (int j = 0; j < N; j++) {
//        int even = 0, odd = 0;
//        for (int i = 0; i < N; i += 2)
//            even += a[i][j];
//        for (int i = 1; i < N; i += 2)
//            odd += a[i][j];
//        beauty_c += max(odd, even);
//    }
//    
//    cout << max(beauty_c, beauty_r) << endl; 
//    
//}
