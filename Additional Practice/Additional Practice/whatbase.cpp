//#include <iostream>
//#include <cmath>
//#include <cstdio>
//
//using namespace std;
//using ll = long long;
//
//void solve() {
//    string A, B; cin >> A >> B;
//    for (ll x = 10; x <= 15000; x++) {
//        ll c = (A[0]-'0')*x*x + (A[1]-'0')*x + (A[2]-'0') - (B[2]-'0'),
//        a = B[0]-'0', b = B[1]-'0',
//        y = (-b + sqrt(b*b + 4*a*c))/(2*a);
//        ll num1 = (A[0]-'0')*x*x + (A[1]-'0')*x + (A[2]-'0'), num2 = (B[0]-'0')*y*y + (B[1]-'0')*y + (B[2]-'0');
//        if (num1 == num2) {
//            cout << x << " " << y << endl;
//            return; 
//        }
//    }
//}
//
//int main() {
//    freopen("whatbase.in", "r", stdin);
//    freopen("whatbase.out", "w", stdout);
//    
//    int K; cin >> K;
//    while (K--)
//        solve();
//}
