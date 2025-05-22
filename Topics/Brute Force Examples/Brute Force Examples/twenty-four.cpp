//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int operation(int a, int b, char op) {
//    if (a == -1000) return -1000;
//    switch (op) {
//        case '0':
//            a += b;
//            break;
//        case '1':
//            a -= b;
//            break;
//        case '2':
//            a *= b;
//            break;
//            
//        default:
//            if (b == 0 || a % b != 0) return -1000;
//            a /= b;
//            break;
//    }
//    return a;
//}
//
//int result(int n, vector<int> c) {
//    string op = "000";
//    int indx = 0;
//    while (n != 0) {
//        op[indx] = n % 4 + '0';
//        n /= 4;
//        indx++;
//    }
//    int v1 = c[0], v2;
//    
//    for (int i = 0; i < 3; i++) {
//        v1 = operation(v1, c[i+1], op[i]);
//    }
//    if (v1 == 24) return 24;
//    if (v1 > 24) v1 = -1000;
//    v2 = operation(c[0], c[1], op[0]);
//    v2 = operation(v2, operation(c[2], c[3], op[2]), op[1]);
//    
//    if (v2 == 24) return 24;
//    if (v2 > 24) v2 = -1000;
//    return max(v1, v2);
//}
//
//void solve() {
//    vector<int> c (4);
//    for (int i = 0; i < 4; i++) cin >> c[i];
//    int max_possible = 0;
//    sort(c.begin(), c.end());
//    do {
//        for (int i = 0; i < 64; i++) {
//            max_possible = max(max_possible, result(i, c));
//            if (max_possible == 24) {
//                cout << 24 << endl;
//                return;
//            }
//        }
//    } while (next_permutation(c.begin(), c.end()));
//    cout << max_possible << endl;
//}
//
//int main() {
//    int N; cin >> N;
//    for (int i = 0; i < N; i++) {
//        solve();
//    }
//}
