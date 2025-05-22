//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
///* iterate over each color's rectangle and if there is another color in the middle of that rectangle,
//that color cannot be the first to be painted */
//
//int main() {
//    freopen("art.in", "r", stdin);
//    freopen("art.out", "w", stdout);
//    
//    vector<bool> used (9, false);
//    int N; cin >> N;
//    string canvas[N];
//    vector<pair<int, int>> first_ocr (9, {N, N}), last_ocr (9, {0, 0});
//    for (int i = 0; i < N; i++) {
//        cin >> canvas[i];
//        for (int j = 0; j < N; j++) {
//            int n = canvas[i][j] - '0' - 1;
//            if (canvas[i][j] != '0') {
//                used[n] = true;
//                // find the starting and ending point of each rectangle.
//                first_ocr[n].first = min(first_ocr[n].first, i);
//                first_ocr[n].second = min(first_ocr[n].second, j);
//                last_ocr[n].first = max(last_ocr[n].first, i);
//                last_ocr[n].second = max(last_ocr[n].second, j);
//            }
//        }
//        
//    }
//    vector<bool> first = used;
//    for (int b = 0; b < 9; b++) {
//        if (!used[b]) continue;
//        char c = b + 1 + '0';
//        for (int i = first_ocr[b].first; i <= last_ocr[b].first; i++) {
//            for (int j = first_ocr[b].second; j <= last_ocr[b].second; j++) {
//                if (canvas[i][j] != c) first[canvas[i][j] - '0' - 1] = false; /* if another color is found
//                in the middle of the rectangle, that color cannot have been painted first. */
//            }
//        }
//    }
//    
//    cout << count(first.begin(), first.end(), true) << endl;
//}
