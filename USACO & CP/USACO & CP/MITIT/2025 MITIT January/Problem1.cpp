//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int N, Q; cin >> N >> Q;
//    vector<int> a (N);
//    vector<pair<bool, int>> used (N);
//    for (int i = 0; i < N; i++) {
//        cin >> a[i];
//    }
//    
//    for (int i = 0; i < Q; i++) {
//        int oper; cin >> oper;
//        if (oper == 1) {
//            int x, y; cin >> x >> y;
//            a[x-1] = y;
//        }
//        else {
//            int l, r; cin >> l >> r;
//            vector<int> backup = a;
//            sort(backup.begin() + l-1, backup.begin() + r);
//            for (int j = l-1; j < r-1; j++) {
//                if (backup[j+1] != backup[j]+1) {
//                    cout << backup[j]+1 << endl;
//                    break;
//                }
//            }
//        }
//    }
//}
