//#include <iostream>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int N; ll K; cin >> N >> K;
//    vector<ll> day (N);
//    ll cost = K + 1;
//    for (int i = 0; i < N; i++)
//        cin >> day[i];
//    
//    ll day_last = day[0];
//    for (int i = 1; i < N; i++) {
//        cost += min(day[i] - day_last, K + 1);
//        day_last = day[i];
//    }
//    cout << cost << endl;
//}
