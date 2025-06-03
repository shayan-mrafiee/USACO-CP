//#include <iostream>
//#include <cstdio>
//#include <unordered_map>
//
//using namespace std;
//
//int main() {
//    freopen("whereami.in", "r", stdin);
//    freopen("whereami.out", "w", stdout); 
//    
//    int N; cin >> N;
//    string mailboxes; cin >> mailboxes;
//    
//    for (int len = 1; len <= N; len++) {
//        bool ok = true;
//        unordered_map<string, int> occurences;
//        for (int i = 0; i <= N - len; i++) {
//            string s = mailboxes.substr(i, len);
//            occurences[s]++;
//        }
//        
//        for (auto a : occurences) {
//            if (a.second > 1) {
//                ok = false;
//                break;
//            }
//        }
//        
//        if (ok) {
//            cout << len << endl;
//            return 0;
//        }
//    }
//}
