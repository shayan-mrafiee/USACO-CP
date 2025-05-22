//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <limits.h>
//
//using namespace std;
//
//int main() {
//    int n, min_instability = INT_MAX; cin >> n;
//    vector<int> w (2 * n);
//    for (int i = 0; i < 2*n; i++)
//        cin >> w[i];
//    
//    sort(w.begin(), w.end());
//    
//    for (int i = 0; i < 2*n-1; i++) {
//        for (int j = i + 1; j < 2*n; j++) {
//            vector<int> v;
//            for (int k = 0; k < 2*n; k++) {
//                if (k == i || k == j) continue;
//                v.push_back(w[k]);
//            }
//            int ins = 0;
//            for (int k = 0; k < 2*n - 2; k += 2) {
//                ins += v[k+1] - v[k];
//            }
//            min_instability = min(min_instability, ins);
//        }
//    }
//    
//    cout << min_instability << endl;
//}
