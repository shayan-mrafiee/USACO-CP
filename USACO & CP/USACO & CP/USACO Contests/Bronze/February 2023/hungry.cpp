//#include <iostream>
//#include <cmath>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int N; ll T; cin >> N >> T;
//    ll haybale = 0, day = 0;
//    for (int i = 0; i < N; i++) {
//        ll d, b; cin >> d >> b;
//        if (day < d) day = d + b - 1;
//        else day += b;
//        haybale += b;
////        cout << day << endl;
////        cout << haybale << endl;
//        
//    }
//    
//    haybale -= (day > T) ? day - T : 0;
//    cout << haybale << endl;
//}
