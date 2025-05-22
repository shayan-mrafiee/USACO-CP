//#include <iostream>
//
//using namespace std;
//
//void solve() {
//    int n, x, y;
//    cin >> n >> x >> y;
//    int a[n], sum = 0;
//    int pairs = 0;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//        sum += a[i];
//    }
//    for (int i = 0; i < n-1; i++) {
//        for (int j = i+1; j < n; j++) {
//            if (sum - a[i] - a[j] >= x && sum - a[i] - a[j] <= y)  {
//                pairs++;
//                //cout << "(" << i+1 << " , " << j+1 << ")\n";
//            }
//        }
//    }
//    cout << pairs << endl;
//}
//
//int main() {
//    int t; cin >> t;
//    for (int i = 0; i < t; i++) solve();
//}
