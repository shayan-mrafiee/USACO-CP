//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    freopen("lifeguards.in", "r", stdin);
//    freopen("lifeguards.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<pair<int, int>> lifeguards (N);
//    for (int i = 0; i < N; i++)
//        cin >> lifeguards[i].first >> lifeguards[i].second;
//    
//    int max_time = 0;
//    
//    for (int i = 0; i < N; i++) {
//        vector<bool> covered (1001, false);
//        int hours = 0;
//        for (int j = 0; j < N; j++) {
//            if (j == i) continue;
//            for (int k = lifeguards[j].first; k < lifeguards[j].second; k++) {
//                if (!covered[k]) hours++;
//                covered[k] = true;
//            }
//        }
//        max_time = max(max_time, hours);
//    }
//    
//    cout << max_time << endl; 
//}
