//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define mp make_pair
//
//vector<string> dir;
//vector<vector<ll>> cell;
//int N;
//
//void update_cell(int i, int j, ll val) {
//    bool b = dir[i][j] == 'R';
//    
//    if (i + !b >= N || j + b >= N)
//        return;
//    
//    cell[i+!b][j+b] += val;
//    update_cell(i+!b, j+b, val);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    cin >> N;
//    dir.resize(N);
//    cell = vector<vector<ll>>(N+1, vector<ll>(N+1, 1));
//    
//    for (int i = 0; i < N; i++) {
//        cin >> dir[i] >> cell[i][N];
//    }
//    
//    for (int i = 0; i < N; i++) {
//        cin >> cell[N][i];
//    }
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            if (i && dir[i-1][j] == 'D') cell[i][j] += cell[i-1][j];
//            if (j && dir[i][j-1] == 'R') cell[i][j] += cell[i][j-1];
//        }
//    }
//    
//    ll ans = 0;
//    for (int i = 0; i < N; i++) {
//        ans += cell[i][N] * cell[i][N-1] * (dir[i][N-1] == 'R') + cell[N][i] * cell[N-1][i] * (dir[N-1][i] == 'D');
//    }
//    cout << ans << "\n";
//    
//    int Q; cin >> Q;
//    while(Q--) {
//        int i, j; cin >> i >> j;
//        ans = 0; i--; j--;
//        update_cell(i, j, -cell[i][j]);
//        dir[i][j] = (dir[i][j] == 'R' ? 'D' : 'R');
//        update_cell(i, j, cell[i][j]);
//        for (int i = 0; i < N; i++) {
//            ans += cell[i][N] * cell[i][N-1] * (dir[i][N-1] == 'R') + cell[N][i] * cell[N-1][i] * (dir[N-1][i] == 'D');
//        }
//        cout << ans << "\n";
//    }
//}
