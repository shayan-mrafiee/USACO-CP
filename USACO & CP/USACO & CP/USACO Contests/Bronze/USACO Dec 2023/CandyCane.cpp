//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int N, M; cin >> N >> M;
//    vector<ll> cowHeights (N);
//    vector<pair<ll, ll>> candyHeights (M);
//    for (int i = 0; i < N; i++)
//        cin >> cowHeights[i];
//    for (int i = 0; i < M; i++) {
//        int c; cin >> c;
//        pair<ll, ll> p = {0, c};
//        candyHeights[i] = p;
//    }
//   
//    for (pair<ll, ll> &candy : candyHeights) {
//        if (candy.first == candy.second) continue;
//        for (ll &cow : cowHeights) {
//            if (cow < candy.first) continue;
//            if (cow > candy.second) {
//                cow += candy.second-candy.first;
//                break; 
//            }
//            ll amount = min(cow, candy.second) - candy.first;
//            candy.first += amount;
//            cow += amount;
//        }
//    }
//   
//    for (ll i : cowHeights) cout << i << endl;
//   
//}
