//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    freopen("loan.in", "r", stdin);
//    freopen("loan.out", "w", stdout);
//    
//    ll N, K, M; cin >> N >> K >> M;
//    
//    auto possible = [&](ll X) {
//        ll G = 0,
//        day = 1;
//        while(day <= K) {
//            ll Y = (N - G)/X;
//            if (Y <= M) break; 
//            ll x = (N - G - X*Y)/Y + 1; // calculate for how many days Y stays the same
//            G += x * Y;
//            day += x;
//            if (G >= N) return true; 
//        }
//        
//        G += (K - min(K, day) + 1) * M;
//        
//        return (G >= N);
//    };
//    
//    ll lo = 1, hi = N, max_X = 1;
//    while(lo <= hi) {
//        ll X = lo + (hi-lo)/2;
//        if (possible(X)) {
//            lo = X+1;
//            max_X = X;
//        }
//        
//        else hi = X-1;
//    }
//    
//    cout << max_X << "\n";
//}
