//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int n, x; cin >> n >> x;
//    vector<ll> prefix(n+1);
//    map<ll, int> occurences;
//    
//    for (int i = 1; i <= n; i++) {
//        cin >> prefix[i];
//        prefix[i] += prefix[i-1];
//    }
//    
//    ll ans = 0;
//    for (ll num : prefix) {
//        ans += occurences[num - x];
//        occurences[num]++;
//    }
//    
//    cout << ans << endl;
//}
