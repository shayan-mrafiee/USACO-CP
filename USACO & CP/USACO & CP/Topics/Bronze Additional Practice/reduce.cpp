//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//bool is_valid(int x1, int x2, int y1, int y2, vector<pair<int, int>> locations) {
//    int removed = 0;
//    for (pair<int, int> p : locations) {
//        if (p.first < x1 || p.first > x2 || p.second < y1 || p.second > y2)
//            removed++;
//    }
//    return (removed <= 3); 
//}
//
//int main() {
//    freopen("reduce.in", "r", stdin);
//    freopen("reduce.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<pair<int, int>> locations (N);
//    int area = 1600000000;
//    for (int i = 0; i < N; i++) {
//        cin >> locations[i].first >> locations[i].second;
//    }
//    sort(locations.begin(), locations.end());
//    vector<int> small_x = {locations[0].first, locations[1].first, locations[2].first, locations[3].first},
//    large_x = {locations[N-1].first, locations[N-2].first, locations[N-3].first, locations[N-4].first};
//    
//    sort(locations.begin(), locations.end(), [](const auto &a, const auto &b) {
//        return a.second < b.second;
//    });
//    
//    vector<int> small_y = {locations[0].second, locations[1].second, locations[2].second, locations[3].second},
//    large_y = {locations[N-1].second, locations[N-2].second, locations[N-3].second, locations[N-4].second};
//    
//    for (int x1 : small_x) {
//        for (int x2 : large_x) {
//            for (int y1 : small_y) {
//                for (int y2 : large_y) {
//                    if (is_valid(x1, x2, y1, y2, locations)) {
//                        area = min(area, (x2-x1)*(y2-y1));
//                    }
//                }
//            }
//        }
//    }
//    
//    cout << area << endl;
//}
