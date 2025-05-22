//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    map<pair<int, int>, int> neighbors;
//    map<pair<int, int>, bool> is_present;
//    int N; cin >> N;
//    int comfortable = 0;
//    for (int cow = 0; cow < N; cow++) {
//        int x, y; cin >> x >> y;
//        is_present[{x,y}] = true;
//        neighbors[{x,y}]--;
//        int x_coords[] {0, -1, 1, 0, 0}, y_coord[] {0, 0, 0, 1, -1};
//        for (int i = 0; i < 5; i++) {
//            neighbors[{x + x_coords[i], y + y_coord[i]}]++;
//            if (is_present[{x + x_coords[i], y + y_coord[i]}]) comfortable += (neighbors[{x + x_coords[i], y + y_coord[i]}] == 3) - (neighbors[{x + x_coords[i], y + y_coord[i]}] == 4);
//        }
//        cout << comfortable << endl;
//    }
//}
