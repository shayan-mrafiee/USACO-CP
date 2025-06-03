//#include <iostream>
//#include <cstdio>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    freopen("factory.in", "r", stdin);
//    freopen("factory.out", "w", stdout);
//    
//    int N; cin >> N;
//    map<int, int> belts;
//    
//    for (int i = 1; i <= N; i++) belts[i] = 0;
//    
//    for (int i = 0; i < N-1; i++) {
//        int a, b;
//        cin >> a >> b;
//        belts[a]++;
//    }
//    bool ok = false;
//    int target;
//    for (int i = 1; i <= N; i++) {
//        if (belts[i] == 0 && !ok) {
//            target = i;
//            ok = true; 
//        }
//        else if (belts[i] == 0 && ok) {
//            ok = false;
//            break;
//        }
//    }
//    
//    if (ok) cout << target << endl;
//    else cout << -1 << endl; 
//    
//}
