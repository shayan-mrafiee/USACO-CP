//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//vector<int> primes[4], all_primes = {1};
//
//void sieve(int max) {
//    vector<bool> is_prime(max+1, true);
//    is_prime[0] = false;
//    is_prime[1] = true;
//    primes[1] = {1};
//    for (int i = 2; i <= max; i++) {
//        if (!is_prime[i]) continue;
//        primes[i % 4].push_back(i);
//        all_primes.push_back(i);
//        for (ll j = i; j*i <= max; j++) {
//            is_prime[i*j] = false;
//        }
//    }
//}
//
//void solve() {
//    int N; cin >> N;
//    int min_to_win[2] = {INT32_MAX, INT32_MAX};
//    
//    for (int i = 0; i < N; i++) {
//        int a; cin >> a;
//        
//        int ops = 0;
//        bool fj_wins = !(true ^ (a % 4 != 0));
//        if (a % 4) {
//            int target = a - *(upper_bound(all(primes[a%4]), a)-1);
//            ops = 1 + target/2;
//        } else ops = a/2;
//        
//        min_to_win[fj_wins] = min(min_to_win[fj_wins], ops);
//    }
//    
//    cout << (min_to_win[1] <= min_to_win[0] ? "Farmer John\n" : "Farmer Nhoj\n");
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    sieve(5e6);
//    
//    int T; cin >> T;
//    while(T--)
//        solve();
//}
