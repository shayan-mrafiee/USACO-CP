//// This problem was included as an example for Graphs but it wasn't worth solving with graphs because it made it too complicated
//
//#include <iostream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    freopen("lineup.in", "r", stdin);
//    freopen("lineup.out", "w", stdout); 
//    
//    vector<string> cows = {"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue", "Buttercup", "Sue"};
//    vector<pair<string, string>> grps;
//    
//    int N; cin >> N;
//    for (int i = 0; i < N; i++) {
//        string cow1, cow2, trash;
//        cin >>  cow1 >> trash >> trash >> trash >> trash >> cow2;
//        pair<string, string> p = {cow1, cow2};
//        grps.push_back(p);
//    }
//    
//    while(next_permutation(cows.begin(), cows.end())) {
//        bool ok = true;
//        for (pair<string, string> p : grps) {
//            int a = find(cows.begin(), cows.end(), p.first) - cows.begin();
//            int b = find(cows.begin(), cows.end(), p.second) - cows.begin();
//            if (abs(a-b) != 1) {
//                ok = false;
//                break;
//            }
//        }
//        if (ok) break;
//    }
//    
//    for (string cow : cows)
//        cout << cow << endl; 
//}
