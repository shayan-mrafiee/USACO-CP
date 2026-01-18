//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int x[7] = {};
//
//bool check() {
//    if (x[0] + x[1] != x[3]) return 0;
//    if (x[0] + x[2] != x[4]) return 0;
//    if (x[0] + x[1] + x[2] != x[6]) return 0;
//    if (x[1] + x[2] != x[5]) return 0;
//    for (int &i : x) if (i <= 0) return 0;
//    return 1;
//}
//
//int find_unknown(int target) {
//    switch (target) {
//        case 0:
//            if (x[1] && x[3]) return x[3] - x[1];
//            if (x[4] && x[2]) return x[4] - x[2];
//            if (x[6] && x[5]) return x[6] - x[5];
//            if (x[6] && x[2] && x[1]) return x[6] - x[2] - x[1];
//            break;
//            
//        case 1:
//            if (x[3] && x[0]) return x[3] - x[0];
//            if (x[5] && x[2]) return x[5] - x[2];
//            if (x[6] && x[4]) return x[6] - x[4];
//            if (x[6] && x[2] && x[0]) return x[6] - x[2] - x[0];
//            break;
//        
//        case 2:
//            if (x[1] && x[5]) return x[5] - x[1];
//            if (x[0] && x[4]) return x[4] - x[0];
//            if (x[3] && x[6]) return x[6] - x[3];
//            if (x[6] && x[0] && x[1]) return x[6] - x[0] - x[1];
//            break;
//            
//        case 3:
//            if (x[1] && x[0]) return x[0] + x[1];
//            if (x[2] && x[6]) return x[6] - x[2];
//            break;
//            
//        case 4:
//            if (x[2] && x[0]) return x[0] + x[2];
//            if (x[1] && x[6]) return x[6] - x[1];
//            break;
//            
//        case 5:
//            if (x[1] && x[2]) return x[1] + x[2];
//            if (x[0] && x[6]) return x[6] - x[0];
//            break;
//            
//        case 6:
//            return x[0] + x[1] + x[2];
//    }
//    return 0;
//};
//
//void solve() {
//    int N;
//    cin >> N;
//
//    for (int &i : x) i = 0;
//    for (int i = 0; i < N; i++) {
//        cin >> x[i];
//    }
//    
//    sort(x, x+7);
//    set<vector<int>> answers;
//    
//    do {
//        vector<int> changed;
//        for (int i = 0; i < 7; i++) {
//            if (x[i] == 0) {
//                x[i] = find_unknown(i);
//                changed.push_back(i);
//            }
//        }
//        if (check()) {
//            vector<int> s;
//            for (int &i : x) s.push_back(i);
//            sort(all(s));
//            answers.insert(s);
//        }
//        
//        for (int i : changed) x[i] = 0;
//    } while(next_permutation(x, x+7));
//    
//    cout << answers.size() << "\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int T; cin >> T;
//    while (T--) {
//        solve();
//    }
//}
