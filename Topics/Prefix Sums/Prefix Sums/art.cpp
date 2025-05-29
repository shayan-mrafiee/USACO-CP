//#include <bits/stdc++.h>
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
//    int N; cin >> N;
//    vector<vector<int>> canvas(N, vector<int>(N));
//    vector<pair<int, int>> first_ocr (N*N, {N, N}), last_ocr (N*N, {0, 0});
//    vector<bool> used(N*N+1, false);
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> canvas[i][j];
//            int &n = canvas[i][j];
//            if (canvas[i][j]) {
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
//    
//    vector<bool> is_first (N*N+1, true);
//    for (int b = 1; b <= N*N; b++) {
//        if (!used[b]) continue;
//        for (int i = first_ocr[b].first; i <= last_ocr[b].first; i++) {
//            for (int j = first_ocr[b].second; j <= last_ocr[b].second; j++) {
//                if (canvas[i][j] != b) is_first[canvas[i][j]] = false; /* if another color is found
//                in the middle of the rectangle, that color cannot have been painted first. */
//            }
//        }
//    }
//    
//    int ans = count(is_first.begin(), is_first.end(), true)-1;
//    if (count(used.begin(), used.end(), true) == 1) ans--; 
//    cout << ans << endl;
//}
