//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <tuple>
//
//using namespace std;
//
//int minCost = 10000;
//vector<vector<int>> conditioners;
//vector<int> stalls (100, 0);
//int N, M;
//
//int cost(vector<vector<int>> conditioners) {
//    int cost = 0;
//    vector<int> c (100, 0);
//    for (vector<int> v : conditioners) {
//        cost += v[0];
//        for (int i = v[1]-1; i < v[2]; i++) {
//            c[i] += v[3];
//        }
//    }
////    cout << endl;
////    for (int i : c) cout << i << " ";
////    cout << endl;
//    for (int i = 0; i < 100; i++) {
//        if (c[i] < stalls[i]) return 10000;
//    }
//    //cout << "cost restulted in " << cost << endl;
//    return cost;
//}
//
//void generateSubset(int i, vector<vector<int>> &subset) {
//    if (i == M) {
//        //cout << "testing subset:\n";
////        for (vector<int> v : subset) {
////            for (int j : v) cout << j << " ";
////            cout << endl;
////        }
//        minCost = min(minCost, cost(subset));
//        return;
//    }
//    subset.push_back(conditioners[i]);
//    generateSubset(i+1, subset);
//    subset.pop_back();
//    generateSubset(i+1, subset);
//}
//
//int main() {
//    cin >> N >> M;
//    for (int i = 0; i < N; i++) {
//        int s, t, c;
//        cin >> s >> t >> c;
//        for (int j = s-1; j < t; j++) stalls[j] = c;
//    }
////    cout << endl;
////    for (int i : stalls) cout << i << " ";
////    cout << endl;
//    
//    for (int i = 0; i < M; i++) {
//        int a, b, p, m;
//        cin >> a >> b >> p >> m;
//        conditioners.push_back({m, a, b, p});
//    }
//    vector<vector<int>> subset;
//    generateSubset(0, subset);
//    
//    cout << minCost << endl;
//    
//}
