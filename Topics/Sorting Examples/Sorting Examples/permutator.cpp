//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int n; cin >> n;
//    vector<ll> a (n), b (n);
//    ll last = 0;
//    for (int i = 0; i < n; i++) {
//        int num; cin >> num;
//        last += n - 2*i;
//        a[i] = (num*last);
//    }
//    for (ll &i : b) cin >> i;
//    
//    sort(a.begin(), a.end());
//    sort(b.begin(), b.end());
//    reverse(b.begin(), b.end());
//    ll ans = 0;
//    
//    for (int i = 0; i < n; i++) {
//        ans += a[i] * b[i];
//    }
//    
//    cout << ans << endl; 
//}
