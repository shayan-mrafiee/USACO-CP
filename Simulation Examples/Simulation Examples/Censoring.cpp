//#include <fstream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    ifstream cin ("censor.in");
//    ofstream cout ("censor.out");
//    
//    string s, t, r; cin >> s >> t;
//    for (char i : s) {
//        r.push_back(i);
//        bool match = true;
//        for (int j = 0; j < t.size(); j++) {
//            if (*(r.end() - j - 1) != *(t.end() - j - 1)) { match = false; break; }
//        }
//        if (match) {
//            r.erase(r.size() - t.size(), t.size()+1);
//        }
//    }
//    cout << r << endl;
//    
//}
