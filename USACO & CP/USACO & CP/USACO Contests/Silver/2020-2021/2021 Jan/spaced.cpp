//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N; cin >> N;
//    vector<vector<int>> beauty(N, vector<int>(N));
//    vector<int> row_sum(N), column_sum(N);
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> beauty[i][j];
//            row_sum[i] += beauty[i][j];
//            column_sum[j] += beauty[i][j];
//        }
//    }
//    
//    for (int i = 0; i < N; i++) {
//        int val = 0;
//        for (int j = 0; j < N; j += 2) val += beauty[i][j];
//        row_sum[i] = max(row_sum[i] - val, val);
//    }
//    
//    for (int j = 0; j < N; j++) {
//        int val = 0;
//        for (int i = 0; i < N; i += 2) val += beauty[i][j];
//        column_sum[j] = max(column_sum[j] - val, val);
//    }
//    
//    cout << max(accumulate(all(row_sum), 0LL), accumulate(all(column_sum), 0LL)) << "\n";
//}
