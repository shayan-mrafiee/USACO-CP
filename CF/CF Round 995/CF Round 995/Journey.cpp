//#include <iostream>
//
//using namespace std;
//
//void solve() {
//    int n, a, b, c;
//    cin >> n >> a >> b >> c;
//    int days = n/(a+b+c) * 3;
//    int dist = n % (a+b+c);
//    int d = 0;
//    int i = 0;
//    while (d < dist) {
//        d += (i % 3 == 0) ? a : (i % 3 == 1) ? b : c;
//        i++;
//        days++;
//    }
//    cout << days << endl;
//}
//
//int main() {
//    int t; cin >> t;
//    for (int i = 0; i < t; i++)
//        solve();
//}
