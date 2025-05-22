//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int n; cin >> n; 
//    vector<ll> prefix(n+1), occurences(n);
//    
//    for (int i = 1; i <= n; i++) {
//        cin >> prefix[i];
//        prefix[i] += prefix[i-1];
//    }
//    
//    ll ans = 0;
//    for (ll num : prefix) {
//        int i = num % n;
//        i += (i < 0) ? n : 0;
//        ans += occurences[i];
//        occurences[i]++;
//    }
//    
//    cout << ans << endl;
//}
