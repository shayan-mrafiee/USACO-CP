//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int T; cin >> T;
//    for (int t = 0; t < T; t++) {
//        int N, M; cin >> N >> M;
//        vector<string> zeros, ones;
//        for (int m = 0; m < M; m++) {
//            string arr; bool ans;
//            cin >> arr >> ans;
//            if (ans) ones.push_back(arr);
//            else zeros.push_back(arr);
//        }
//        string zerosCombined (N, '0'), onesCombined (N, '0');
//        bool ok = true;
//        for (string s : zeros) {
//            //cout << "s = " << s << endl;
//            if (count(ones.begin(), ones.end(), s)) {
//                ok = false;
//                break;
//            }
//            for (int i = 0; i < N; i++) {
//                //cout << "s0[" << i << "] = " << s[i] << endl;
//                if (s[i] == '1') zerosCombined[i] = '1';
//            }
//        }
//        //cout << "zerosCombined = " << zerosCombined << endl;
////        if (count(ones.begin(), ones.end(), zerosCombined)) ok = false;
//        for (string s : ones) {
//           // cout << "s = " << s << endl;
//            if (!ok) break;
////            if (count(zeros.begin(), zeros.end(), onesCombined)) {
////                ok = false;
////                break;
////            }
//            for (int i = 0; i < N; i++) {
//                //cout << "s1[" << i << "] = " << s[i] << endl;
//                if (s[i] == '1') onesCombined[i] = '1';
//            }
//        }
//        //cout << "onesCombined = " << onesCombined << endl;
////        if (count(zeros.begin(), zeros.end(), onesCombined)) ok = false;
//        if (!ok || onesCombined == zerosCombined) cout << "LIE\n";
//        else cout << "OK\n";
//    }
//}
