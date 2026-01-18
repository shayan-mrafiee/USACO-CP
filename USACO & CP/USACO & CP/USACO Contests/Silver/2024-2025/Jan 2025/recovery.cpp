//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    int N; cin >> N;
//    vector<vector<int>> table(N, vector<int>(N));
//    vector<int> ocr(2*N + 1);
//    vector<pair<int, int>> original(2*N + 1);
//    vector<vector<int>> normal(N+1);
//    
//    for (int i = 1; i <= N; i++) {
//        normal[i] = {i+1, 2*N + 1 - i};
//    }
//    
//    for (vector<int> &v : table) {
//        for (int &i : v) {
//            cin >> i;
//            ocr[i]++;
//        }
//    }
//    
//    auto recover = [&](vector<int> &v, int j) {
//        for (int i : v) {
//            original[i].first = normal[ocr[i]][j];
//            original[i].second = normal[ocr[i]][!j];
//        }
//    };
//    
//    int j = 0;
//    for (vector<int> &v : table) {
//        for (int i : v) {
//            if (ocr[i] == 1) {
//                recover(v, j);
//                j++;
//            }
//        }
//    }
//    
//    vector<vector<int>> ans1 = table, ans2 = ans1;
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            ans1[i][j] = original[table[i][j]].first;
//            ans2[i][j] = original[table[i][j]].second;
//        }
//    }
//    
//    vector<vector<int>> ans = min(ans1, ans2);
//    
//    for (vector<int> &v : ans) {
//        for (int &i : v) {
//            cout << i << (i == v.back() ? "" : " ");
//        }
//        cout << "\n";
//    }
//}
