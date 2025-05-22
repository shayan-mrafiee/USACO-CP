//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//int main() {
//    freopen("evolution.in", "r", stdin);
//    freopen("evolution.out", "w", stdout);
//    
//    map<string, vector<int>> populations;
//    int N; cin >> N;
//    for (int i = 0; i < N; i++) {
//        int K; cin >> K;
//        for (int j = 0; j < K; j++) {
//            string characteristic; cin >> characteristic;
//            populations[characteristic].push_back(i);
//        }
//    }
//    
//    vector<vector<int>> v;
//    for (auto a : populations) {
//        v.push_back(a.second);
//    }
//    for (int i = 0; i < v.size()-1; i++) {
//        for (int j = i + 1; j < v.size(); j++) {
//            bool inside1 = true, inside2 = true, cross = false;
//            for (int population : v[i]) {
//                if (count(v[j].begin(), v[j].end(), population)) cross = true;
//                else inside1 = false;
//            }
//            for (int population : v[j]) {
//                if (!count(v[i].begin(), v[i].end(), population)) inside2 = false;
//            }
//            if (!inside1 && !inside2 && cross) {
//                cout << "no\n";
//                return 0; 
//            }
//        }
//    }
//    
//    cout << "yes\n"; 
//}
