//#include <iostream>
//#include <vector>
//
//using namespace std;
//using ll = long long;
//
///**
// * Return the score of S amplified K times
// * 
// * S: string to amplify
// * K: integer for number of times to amplify
// */
//
//const int MOD = 998244353;
//
//int solve(string S, int K) {
//    ll ans = 0;
//    vector<ll> fib(K+2);
//    fib[1] = 1;
//    for (int i = 2; i <= K+1; i++) {
//        fib[i] = (fib[i-1] + fib[i-2]) % MOD;
//    }
//    
//    for (char c : S) {
//        if (c < 'a') {
//            ans += fib[K+1] * (c - 'A' + 27) % MOD; // capitals
//            ans += fib[K] * (c - 'A' + 1) % MOD;
//            ans %= MOD;
//        } else {
//            ans += fib[K] * (c - 'a' + 27) % MOD;
//            ans += fib[K-1] * (c - 'a' + 1) % MOD;
//            ans %= MOD;
//        }
//    }
//    
//    return (int) ans;
//}
//
//int main() {
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++) {
//        int K;
//        string S;
//        cin >> S >> K;
//        cout << solve(S, K) << '\n';
//    }
//}
