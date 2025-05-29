//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int N, M, Q; cin >> N >> M >> Q;
//    
//    vector<vector<int>> grid(N, vector<int>(M));
//    vector<vector<int>> blues, horizontal, vertical;
//    
//    for (int i = 0; i < N; i++) {
//        string s; cin >> s;
//        for (int j = 0; j < M; j++) grid[i][j] = s[j] - '0';
//    }
//    
//    blues = horizontal = vertical = grid;
//    
//    auto construct_sum = [N, M](vector<vector<int>> &v) {
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < M; j++) {
//                if (i) v[i][j] += v[i-1][j];
//                if (j) v[i][j] += v[i][j-1];
//                if (i && j) v[i][j] -= v[i-1][j-1];
//            }
//        }
//    };
//    
//    construct_sum(blues);
//    
//    for (int i = 0; i < N; i++) {
//        bool ignore = false;
//        for (int j = 0; j < M; j++) {
//            if (grid[i][j] && !ignore) ignore = true;
//            else if (grid[i][j]) horizontal[i][j] = 0;
//            else ignore = false;
//        }
//    }
//    construct_sum(horizontal);
//    
//    for (int j = 0; j < M; j++) {
//        bool ignore = false;
//        for (int i = 0; i < N; i++) {
//            if (grid[i][j] && !ignore) ignore = true;
//            else if (grid[i][j]) vertical[i][j] = 0;
//            else ignore = false;
//        }
//    }
//    construct_sum(vertical);
//    
//    auto calc_sum = [N, M](vector<vector<int>> &v, int x1, int y1, int x2, int y2) {
//        if (x1 > x2 || y1 > y2) return 0;
//        
//        int result = v[x2][y2];
//        if (x1) result -= v[x1-1][y2];
//        if (y1) result -= v[x2][y1-1];
//        if (x1 && y1) result += v[x1-1][y1-1];
//        return result;
//    };
//    
//    while(Q--) {
//        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
//        x1--; x2--; y1--; y2--;
//        
//        int hor_lines = calc_sum(horizontal, x1, y1+1, x2, y2) + calc_sum(blues, x1, y1, x2, y1),
//        ver_lines = calc_sum(vertical, x1+1, y1, x2, y2) + calc_sum(blues, x1, y1, x1, y2),
//        b = calc_sum(blues, x1, y1, x2, y2);
//        
//        cout << hor_lines + ver_lines - b << "\n";
//    }
//}
