//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//using ld = long double;
//
//void solve() {
//    ld n, d, h; cin >> n >> d >> h;
//    vector<int> triangles (n);
//    for (int i = 0; i < n; i++) cin >> triangles[i];
//    
//    sort(triangles.begin(), triangles.end());
//    ld area = n * d * h / 2.0;
//    
//    for (int i = 0; i < n-1; i++) {
//        if (triangles[i] + h > triangles[i+1])
//            area -= (triangles[i] + h - triangles[i+1]) * (triangles[i] + h - triangles[i+1])/h * d / 2.0;
//    }
//    printf("%.7Lf\n", area);
//}
//
//int main() {
//    int t; cin >> t;
//    for (int i = 0; i < t; i++)
//        solve();
//}
