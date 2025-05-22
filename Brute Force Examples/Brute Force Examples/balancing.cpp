//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    freopen("balancing.in", "r", stdin);
//    freopen("balancing.out", "w", stdout);
//    
//    int N; cin >> N;
//    int M = N;
//    vector<pair<int, int>> coords (N);
//    vector<int> Xs, Ys;
//    for (int i = 0; i < N; i++) {
//        cin >> coords[i].first >> coords[i].second;
//        Xs.push_back(coords[i].first + 1);
//        Ys.push_back(coords[i].second + 1);
//    }
//    sort(Xs.begin(), Xs.end());
//    sort(Ys.begin(), Ys.end());
//    for (int x : Xs) {
//        vector<pair<int, int>> right, left;
//        for (pair<int, int> p : coords) {
//            if (p.first > x) right.push_back(p);
//            else left.push_back(p);
//        }
//        sort(right.begin(), right.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
//            return a.second < b.second;
//        });
//        sort(left.begin(), left.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
//            return a.second < b.second;
//        });
//        for (int y : Ys) {
//            int r1 = right.size(), r2 = left.size(), r3 = 0, r4 = 0;
//            for (pair<int, int> p : right) {
//                if (p.second > y) break;
//                r1--;
//                r4++;
//            }
//            for (pair<int, int> p : left) {
//                if (p.second > y) break;
//                r2--;
//                r3++;
//            }
//            M = min(M, max(max(r1, r2), max(r3, r4)));
//        }
//    }
//    
//    cout << M << endl; 
//}
