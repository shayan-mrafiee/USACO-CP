//#include <iostream>
//#include <cstdio>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    freopen("crossroad.in", "r", stdin);
//    freopen("crossroad.out", "w", stdout);
//    
//    int N; cin >> N;
//    int crosses = 0;
//    vector<bool> hasAppeared (10, false), side (10);
//    
//    for (int i = 0; i < N; i++) {
//        int cow; cin >> cow;
//        bool b; cin >> b;
//        cow--;
//        if (!hasAppeared[cow]) {
//            side[cow] = b;
//            hasAppeared[cow] = true; 
//        }
//        else {
//            crosses += (b != side[cow]) ? 1 : 0;
//            side[cow] = b;
//        }
//    }
//    
//    cout << crosses << endl; 
//}
