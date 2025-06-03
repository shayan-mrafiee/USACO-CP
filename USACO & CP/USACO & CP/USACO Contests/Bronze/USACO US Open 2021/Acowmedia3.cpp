//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int N, M;
//    cin >> N >> M;
//    vector<string> pasture(N);
//    for (string &s : pasture)
//        cin >> s;
//    
//    int ans = 0;
//    set<vector<pair<int, int>>> friends;
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) if (pasture[i][j] == 'G') {
//            int x[] {1, 0, -1, 0}, y[] {0, 1, 0, -1};
//            vector<pair<int, int>> v;
//            for (int k = 0; k < 4; k++) if (i + x[k] >= 0 && i + x[k] < N && j + y[k] >= 0 && j + y[k] < M && pasture[i + x[k]][j + y[k]] == 'C') {
//                v.push_back({i + x[k], j + y[k]});
//            }
//            
//            if (v.size() > 2) ans++;
//            else if (v.size() == 2) {
//                sort(v.begin(), v.end());
//                friends.insert(v);
//            }
//        }
//    }
//    
//    cout << ans + friends.size() << endl;
//}
