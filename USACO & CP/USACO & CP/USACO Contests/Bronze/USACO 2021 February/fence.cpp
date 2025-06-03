//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int N; cin >> N;
//    vector<string> CW = {"ES", "SW", "WN", "NE"}, CCW = {"SE", "WS", "NW", "EN"};
//    for (int i = 0; i < N; i++) {
//        int cw = 0, ccw = 0;
//        char last = '0';
//        string fence; cin >> fence;
//        for (char c : fence) {
//            string s; s.push_back(last); s.push_back(c);
//            cw += count(CW.begin(), CW.end(), s);
//            ccw += count(CCW.begin(), CCW.end(), s);
//            last = c;
//        }
//        if (cw > ccw) cout << "CW\n";
//        else cout << "CCW\n";
//    }
//}
