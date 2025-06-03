//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<string> blocks (4);
//
//void solve() {
//    string word; cin >> word;
//    vector<string> temp = blocks;
//    do {
////        for (string s : temp) cout << s << ' ';
////        cout << endl;
//        vector<bool> checked (4, false);
//        for (char c : word) {
//            bool found = false;
//            for (int i = 0; i < 4; i++) {
//                if (checked[i]) continue;
//                if (temp[i].find(c) != string::npos) {
//                    //cout << "Letter " << c << " found in block number " << i + 1 << endl;
//                    checked[i] = true;
//                    found = true;
//                    break;
//                }
//            }
//            if (!found) {
//                //cout << "Letter " << c << " not found\n";
//                goto execute;
//            }
//        }
//        cout << "YES\n";
//        return;
//        
//        execute: continue;
//    } while (next_permutation(temp.begin(), temp.end()));
//    cout << "NO\n";
//}
//
//int main() {
//    int N; cin >> N;
//    for (int i = 0; i < 4; i++) {
//        cin >> blocks[i];
//    }
//    for (int i = 0; i < N; i++) {
//        solve();
//    }
//}
