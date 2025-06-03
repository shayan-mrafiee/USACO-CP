//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int t; cin >> t;
//    for (int h = 0 ; h < t; h++) {
//        int n; cin >> n;
//        vector<int> a (n);
//        int sum = 0;
//        for (int i = 0; i < n; i++) {
//            cin >> a[i];
//            sum += a[i];
//        }
//        if (n == 1 || count(a.begin(), a.end(), a[0]) == n) {
//            cout << 0 << endl;
//            continue;
//        }
//        int num = n - 1;
//        for (int f = sum; f >= 1; f--) {
//            if (sum % f == 0) {
//                int factor = sum/f;
//                int curSum = 0;
//                int temp = 0;
//                bool ok = true;
//                for (int i = 0; i < n; i++) {
//                    curSum += a[i];
//                    if (curSum > factor) {
//                        ok = false;
//                        break;
//                    }
//                    if (curSum == factor) {
//                        curSum = 0;
//                        continue;
//                    }
//                    temp ++;
//                }
//                if (ok) {
//                    num = min(temp*1.0, num*1.0);
//                }
//            }
//        }
//        cout << num << endl;
//    }
//}
