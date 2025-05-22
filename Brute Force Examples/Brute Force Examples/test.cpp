////
////  main.hpp
////  Brute Force Examples
////
////  Created by Shayan M. Rafiee on 12/29/24.
////
//
//
//#include <fstream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    ifstream cin ("balancing.in");
//    ofstream cout ("balancing.out");
//   
//    int n, m; cin >> n;
//    m = n; 
//    vector<pair<int, int>> coords;
//    for (int i = 0; i < n; i++) {
//        pair<int, int> p;
//        cin >> p.first >> p.second;
//        coords.push_back(p);
//    }
//    sort(coords.begin(), coords.end());
//    vector<pair<int, int>> xs = coords;
//    sort(coords.begin(), coords.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
//       return a.second < b.second;
//    });
//    vector<pair<int, int>> ys = coords;
//    
//    for (pair<int, int> i : xs) {
//        for (pair<int, int> j : ys) {
//            int x = i.first + 1;
//            int y = j.second + 1;
//            int r1 = 0, r2 = 0, r3 = 0 , r4 = 0;
//            for (pair<int, int> p : coords) {
//               r1 += (p.first > x && p.second > y) ? 1 : 0;
//               r2 += (p.first < x && p.second > y) ? 1 : 0;
//               r3 += (p.first < x && p.second < y) ? 1 : 0;
//               r4 += (p.first > x && p.second < y) ? 1 : 0;
//           }
//           m = min(m, max(max(r1,r2), max(r3,r4)));
//        }
//    }
//    
//    cout << m << endl;
//}
