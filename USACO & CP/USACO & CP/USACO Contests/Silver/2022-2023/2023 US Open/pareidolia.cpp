//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    string t; cin >> t;
//    
//    const string bessie = "bessie";
//    int waiting[7] = {};
//    
//    ll ans = 0;
//    ll rem = t.size();
//    
//    for (char c : t) {
//        waiting[0]++;
//        for (int i = 5; i >= 0; i--) {
//            if (c == bessie[i]) {
//                waiting[i+1] += waiting[i];
//                waiting[i] = 0;
//            }
//        }
//        
//        ans += (rem--) * waiting[6];
//        
//        waiting[0] += waiting[6];
//        waiting[6] = 0;
//    }
//    
//    cout << ans << "\n";
//}
