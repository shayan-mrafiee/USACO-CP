//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <limits.h>
//
//using namespace std;
//
//vector<vector<int>> recipes;
//
//vector<int> a;
//
//bool can_make(int metal) {
//    if (recipes[metal].empty()) return false;
//    
//    bool has = true;
//    for (int i : recipes[metal]) {
//        if (a[i] < 1 && !can_make(i)) {
//            has = false;
//            break;
//        }
//    }
//    
//    if (has) {
//        for (int &i : recipes[metal])
//            a[i]--;
//        a[metal]++;
//        return true;
//    }
//    
//    return false;
//}
//
//int main() {
//    int N, K; cin >> N;
//    recipes = vector<vector<int>> (N);
//    a = vector<int> (N);
//    int maximum = 0;
//    for (int i = 0; i < N; i++)
//        cin >> a[i];
//    cin >> K;
//    for (int i = 0; i < K; i++) {
//        int L, M;
//        cin >> L >> M;
//        recipes[L-1] = vector<int>(M);
//        for (int j = 0; j < M; j++) {
//            int metal; cin >> metal;
//            recipes[L-1][j] = metal-1;
//        }
//    }
//    
//    bool cont = true;
//    while (cont) {
//        cont = false;
//        sort(recipes[N-1].begin(), recipes[N-1].end(), [](const int &b, const int &c) {
//            return a[b] < a[c];
//        });
//        if (can_make(recipes[N-1][0]))
//            cont = true;
//        int minimum = INT_MAX;
//        for (int i : recipes[N-1]) {
//            minimum = min(minimum, a[i]);
//        }
//        maximum = (minimum == 1000000) ? maximum : max(maximum, minimum);
//    }
//    cout << maximum + a[N-1] << endl;
//}
