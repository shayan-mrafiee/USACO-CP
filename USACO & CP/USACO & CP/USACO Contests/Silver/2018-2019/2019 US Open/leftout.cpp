//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//vector<string> grid;
//
//int count(int i1, int i2, int j1, int j2, char c) {
//    int n = 0;
//    for (int i = i1; i <= i2; i++) {
//        for (int j = j1; j <= j2; j++)
//            n += (grid[i][j] == c);
//    }
//    
//    return n;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    freopen("leftout.in", "r", stdin);
//    freopen("leftout.out", "w", stdout);
//    
//    int N; cin >> N;
//    grid.resize(N);
//    
//    for (string &row : grid) cin >> row;
//    
//    for (int i = 0; i < N; i++) {
//        if (grid[i][0] == 'L') for (int j = 0; j < N; j++)
//            grid[i][j] = (grid[i][j] == 'R') ? 'L' : 'R';
//        
//        if (grid[0][i] == 'L') for (int j = 0; j < N; j++)
//            grid[j][i] = (grid[j][i] == 'R') ? 'L' : 'R';
//    }
//    
//    if (count(1, N-1, 1, N-1, 'R') == 0) { cout << "1 1\n"; return 0; }
//    if (count(1, N-1, 1, N-1, 'L') == N-1) {
//        for (int i = 1; i < N; i++) if (count(i, i, 1, N-1, 'L') == N-1) { cout << i+1 << " 1\n"; return 0; }
//        for (int j = 1; j < N; j++) if (count(1, N-1, j, j, 'L') == N-1) { cout << "1 " << j+1 << "\n"; return 0; }
//        cout << "-1\n";
//    }
//    
//    if (count(1, N-1, 1, N-1, 'L') != 1) { cout << "-1\n"; return 0; }
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            if (grid[i][j] == 'L') {
//                cout << i+1 << " " << j+1 << "\n";
//                return 0;
//            }
//        }
//    }
//}
