//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//using ll = long long;
//
//struct Plant {
//    int h, a, t;
//};
//
//void solve() {
//    int N; cin >> N;
//    vector<Plant> plants (N);
//    ll days = 0;
//    for (int i = 0; i < N; i++) cin >> plants[i].h;
//    for (int i = 0; i < N; i++) cin >> plants[i].a;
//    for (int i = 0; i < N; i++) cin >> plants[i].t;
//    
//    sort(plants.begin(), plants.end(), [](const Plant &p1, const Plant &p2) {
//        return p1.t > p2.t;
//    });
//    
//    for (int i = 0; i < N-1; i++) {
//        if (plants[i].a > plants[i+1].a) {
//            cout << -1 << endl;
//            return;
//        }
//        
//    }
//}
//
//int main() {
//    int T; cin >> T;
//    for (int i = 0; i < T; i++)
//        solve();
//}
