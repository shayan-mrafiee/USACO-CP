//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int N, K; cin >> N >> K;
//    vector<ll> D (N-1), C (N);
//    for (ll &i : D)
//        cin >> i;
//    for (ll &i : C)
//        cin >> i;
//    
//    ll cost = K * C[0], remaining = K - D[0];
//    ll last = C[0];
//    for (int i = 1; i < N-1; i++) {
//        if (C[i] < last) {
//            cost -= remaining * last;
//            cost += K * C[i];
//            remaining = K - D[i];
//            last = C[i];
//        }
//        
//        else {
//            if (remaining < D[i]) {
//                cost += C[i] * K;
//                last = C[i];
//                remaining = K - D[i] + remaining;
//            }
//            else
//                remaining -= D[i];
//        }
//    }
//    
//    cost -= remaining * last;
//    
//    cout << cost << endl;
//}
