//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    freopen("taming.in", "r", stdin);
//    freopen("taming.out", "w", stdout);
//    
//    int n; cin >> n;
//    int logs[n];
//    vector<bool> minBreakouts (n, false), maxBreakouts (n, false);
//    minBreakouts[0] = 1;
//    maxBreakouts[0] = 1;
//    int day = 0;
//    for (int i = 0; i < n; i++) {
//        cin >> logs[i];
//    }
//    if (logs[0] != -1 && logs[0] != 0) {
//        cout << -1 << endl;
//        return 0;
//    }
//    
//    for (int i = 1; i < n; i++) {
//        day++;
//        if (logs[i] == 0) {
//            minBreakouts[i] = 1;
//            maxBreakouts[i] = 1;
//            day = 0;
//        }
//        else if (logs[i] == -1) {
//            minBreakouts[i] = 0;
//            maxBreakouts[i] = 1;
//        }
//        else {
//            if (logs[i] > day) {
//                cout << -1 << endl;
//                return 0; 
//            }
//            for (int j = i; j > i-logs[i]; j--) {
//                if (j <= 0) {
//                    cout << -1 << endl;
//                    return 0;
//                }
//                minBreakouts[j] = 0;
//                maxBreakouts[j] = 0;
//            }
//            minBreakouts[i-logs[i]] = 1;
//            maxBreakouts[i-logs[i]] = 1;
//        }
//    }
//    
//    int m = count(minBreakouts.begin(), minBreakouts.end(), true);
//    int M = count(maxBreakouts.begin(), maxBreakouts.end(), true);
//    cout << m << " " << M << endl; 
//    
//}
