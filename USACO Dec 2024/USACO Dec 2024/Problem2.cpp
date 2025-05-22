//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int N, Q; cin >> N >> Q;
//    int blocks = 0;
//    vector<int> v (N, 0);
//    vector<vector<int>> Xs (N, v), Ys (N, v), Zs (N, v);
//    
//    for (int q = 0; q < Q; q++) {
//        int x, y, z;
//        cin >> x >> y >> z;
//        Xs[y][z]++;
//        blocks += (Xs[y][z] == N) ? 1 : 0;
//        
//        Ys[x][z]++;
//        blocks += (Ys[x][z] == N) ? 1 : 0;
//        
//        Zs[x][y]++;
//        blocks += (Zs[x][y] == N) ? 1 : 0;
//        
//        cout << blocks << endl; 
//    }
//}
