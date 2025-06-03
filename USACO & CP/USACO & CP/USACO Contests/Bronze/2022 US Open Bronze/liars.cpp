//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int N, liars; cin >> N;
//    liars = N;
//    vector<pair<char, int>> info (N);
//    for (int i = 0; i < N; i++) {
//        cin >> info[i].first >> info[i].second;
//    }
//    
//    for (int i = 0; i < N; i++) {
//        int l = 0;
//        int target = info[i].second;
//        for (int j = 0; j < N; j++) {
//            if (i == j) continue;
//            if ((info[j].first == 'G' && info[j].second > target) || (info[j].first == 'L' && info[j].second < target)) {
//                l++;
//            }
//        }
//        liars = min(liars, l);
//    }
//    
//    cout << liars << endl;
//}
