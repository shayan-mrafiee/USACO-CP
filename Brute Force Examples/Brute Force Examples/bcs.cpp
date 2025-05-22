//// we will be brute forcing every possible pair of pieces by shifting 
//
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//bool test(vector<pair<int ,int>> v1, vector<pair<int, int>> v2, vector<string> original, int min_x1, int min_y1, int min_x2, int min_y2, int max_x1, int max_y1, int max_x2, int max_y2) {
//    int N = original.size();
//    for (int i = -min_x1; i < N - max_x1; i++) {
//        for (int j = -min_y1; j < N - max_y1; j++) {
//            vector<string> v (N, string(N, '.'));
//            for (pair<int, int> p : v1) {
//                v[p.first+i][p.second+j] = '#';
//            }
//            vector<string> backup = v;
//            for (int k = -min_x2; k < N - max_x2; k++) {
//                for (int h = -min_y2; h < N - max_y2; h++) {
//                    v = backup;
//                    for (pair<int, int> p : v2) {
//                        if (v[p.first + k][p.second + h] == '#') break;
//                        v[p.first + k][p.second + h] = '#';
//                    }
//                    if (v == original) return true;
//                }
//            }
//        }
//    }
//    return false;
//}
//
//int main() {
//    freopen("bcs.in", "r", stdin);
//    freopen("bcs.out", "w", stdout); 
//    
//    int N, K;
//    cin >> N >> K;
//    vector<string> original (N);
//    vector<vector<pair<int, int>>> segments (K);
//    vector<int> min_xs (K, 100), min_ys (K, 100), max_xs (K, 0), max_ys (K, 0);
//    for (int i = 0; i < N; i++)
//        cin >> original[i];
//    for (int i = 0; i < K; i++) {
//        vector<pair<int, int>> v;
//        for (int j = 0; j < N; j++) {
//            string segment;
//            cin >> segment;
//            for (int h = 0; h < N; h++) {
//                if (segment[h] == '#') {
//                    v.push_back({j, h});
//                    min_xs[i] = min(min_xs[i], j);
//                    min_ys[i] = min(min_ys[i], h);
//                    max_xs[i] = max(max_xs[i], j);
//                    max_ys[i] = max(max_ys[i], h);
//                }
//            }
//        }
//        segments[i] = v;
//    }
//    
//    for (int i = 0; i < K - 1; i++) {
//        for (int j = i + 1; j < K; j++) {
//            if (test(segments[i], segments[j], original, min_xs[i], min_ys[i], min_xs[j], min_ys[j], max_xs[i], max_ys[i], max_xs[j], max_ys[j])) {
//                cout << i + 1 << " " << j + 1 << endl;
//                return 0;
//            }
//        }
//    }
//}
