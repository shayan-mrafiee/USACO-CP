//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//
//vector<string> canvas;
//vector<vector<string>> quadrants (4);
//int N;
//
//int min_changes(int r, int c) {
//    int changes = (canvas[N-r-1][c] != canvas[r][c]) + (canvas[r][N-c-1] != canvas[r][c]) + (canvas[N-r-1][N-c-1] != canvas[r][c]);
//    return min(changes, 4 - changes);
//}
//
//int quadrant(int r, int c) {
//    if (r < N/2 && c < N/2) return 0;
//    if (r < N/2 && c >= N/2) return 1;
//    if (r >= N/2 && c >= N/2) return 2;
//    return 3;
//}
//
//int main() {
//    int U; cin >> N >> U;
//    canvas.resize(N);
//    for (string &row : canvas) cin >> row;
//    vector<int> q (4, 0);
//    
//    for (int r = 0; r < N; r++) {
//        for (int c = 0; c < N; c++) {
//            q[quadrant(r, c)] += min_changes(r, c);
//        }
//    }
//    
//    cout << min(min(q[0], q[1]), min(q[2], q[3])) << endl;
//    
//    while(U--) {
//        int r, c; cin >> r >> c;
//        r--; c--;
//        pair<int, int> coords[] {{r,c}, {N-r-1, c}, {r, N-c-1}, {N-r-1, N-c-1}};
//        for (pair<int, int> p : coords) {
//            q[quadrant(p.first, p.second)] -= min_changes(p.first, p.second);
//        }
//        canvas[r][c] = (canvas[r][c] == '.') ? '#' : '.';
//        
//        for (pair<int, int> p : coords) {
//            q[quadrant(p.first, p.second)] += min_changes(p.first, p.second);
//        }
//        cout << min(min(q[0], q[1]), min(q[2], q[3])) << endl;
//    }
//}
