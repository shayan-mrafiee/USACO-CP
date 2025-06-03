//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    int N; cin >> N;
//    int odds = 0, evens = 0;
//    for (int i = 0; i < N; i++) {
//        int id; cin >> id;
//        evens += (id + 1) % 2;
//        odds += id % 2;
//    }
//    if (odds > evens) {
//        int x = (odds - evens + 2)/3;
//        evens += x; odds -= 2*x;
//    }
//    
//    if (evens > odds) {
//        cout << 2*odds + 1 << endl;
//    }
//    
//    else
//        cout << evens + odds << endl;
//}
