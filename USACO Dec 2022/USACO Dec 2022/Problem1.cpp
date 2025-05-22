//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int n; cin >> n;
//    long long tuition;
//    long long maxmoney = 0;
//    vector<long long> cows (n);
//    for (int i = 0; i < n; i++) {
//        cin >> cows[i];
//    }
//    sort(cows.begin(), cows.end());
//    for (int i = 0; i < n; i++) {
//        long long t = cows[i];
//        long long m = (n-i) * t;
//        if (m > maxmoney) {
//            maxmoney = m;
//            tuition = t;
//        }
//    }
//    cout << maxmoney << " " << tuition << endl;
//    
//}
