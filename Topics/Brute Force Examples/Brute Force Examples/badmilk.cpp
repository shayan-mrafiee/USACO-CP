//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//#include <tuple>
//#include <cstdio>
//
//using namespace std;
//
//int N, M, D, S;
//
//vector<pair<int, int>> test(vector<tuple<int, int, int>> data, int bad) {
//    vector<bool> isSick (N, false);
//    vector<pair<int, int>> v;
//    for (tuple<int, int, int> t : data) {
//        if (get<1>(t) != bad) continue;
//        if (!isSick[get<0>(t)-1]) {
//            v.push_back({get<0>(t), get<2>(t)+1});
//            isSick[get<0>(t)-1] = true; 
//        }
//    }
//    return v;
//}
//
//int main() {
//    freopen("badmilk.in", "r", stdin);
//    freopen("badmilk.out", "w", stdout);
//    
//    cin >> N >> M >> D >> S;
//    vector<tuple<int, int, int>> data (D);
//    vector<pair<int, int>> sick (S);
//    int max_doses = 0;
//    
//    for (int i = 0; i < D; i++) {
//        int p, m, t;
//        cin >> p >> m >> t;
//        data[i] = {p, m, t};
//    }
//    for (int i = 0; i < S; i++) {
//        int p, t; cin >> p >> t;
//        sick[i] = {p, t};
//    }
//    
//    sort(data.begin(), data.end(), [](const tuple<int, int, int> &a, tuple<int, int, int> &b) {
//        return get<2>(a) > get<2>(b);
//    });
//    
//    for (int milk = 1; milk <= M; milk++) {
//        vector<pair<int, int>> v = test(data, milk);
////        for (pair<int, int> p : v) cout << "{" << p.first << ", " << p.second << "} ";
////        cout << endl; 
//        bool ok = true;
//        for (pair<int, int> p : sick) {
//            bool found = false; ;
//            for (pair<int, int> search : v) {
//                if (search.first == p.first) found = true;
//                if (search.first == p.first && search.second > p.second) {
//                    ok = false;
//                    //cout << "didn't work\n";
//                    goto check;
//                }
//                
//            }
//            if (!found) {
//                //cout << "not found\n";
//                ok = false;
//                break;
//            }
//        }
//        check:
//        if (ok) max_doses = max((int) v.size(), max_doses);
//    }
//    
//    cout << max_doses << endl; 
//}
