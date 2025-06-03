//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int countMoo(string &s, string substr) {
//    int n = 0;
//    while (s.find(substr) != string::npos) {
//        s.replace(s.find(substr), 3, "...");
//        n++;
//    }
//    return n;
//}
//
//bool if_change(string s, string substr) {
//    for (int i = 0; i < s.size() - 1; i++) {
//        string test = s.substr(i, 3);
//        //cout << test << endl;
//        if (test == substr) {
//            //cout << "test and substr found equal\n";
//            i += 2;
//            continue;
//        }
//        if (test.find(".") != string::npos) continue;
//        if ((test[0] == substr[0] && test[1] == substr[1] && test[2] != test[1]) || (test[1] == substr[1] && test[2] == substr[2] && test[0] != substr[0]) || (test[0] == substr[0] && test[2] == substr[2] && test[1] != substr[1])) return true;
//    }
//    return false;
//}
//
//int main() {
//    vector<string> moos;
//    int N, F; string txt;
//    cin >> N >> F >> txt;
//    string letters = "abcdefghijklmnopqrstuvwxyz";
//    for (int i = 0; i < 26; i++) {
//        for (int j = 0; j < 26; j++) {
//            if (i == j) continue;
//            string substr, s = txt;
//            substr.push_back(letters[i]);
//            substr.push_back(letters[j]); substr.push_back(letters[j]);
//            int n = countMoo(s, substr);
//            if (n >= F) moos.push_back(substr);
//            else if (n == F - 1 && if_change(s, substr)) {
//                moos.push_back(substr);
//            }
//        }
//    }
//    sort(moos.begin(), moos.end());
//    cout << moos.size() << endl;
//    for (string s : moos) cout << s << endl;
//}
