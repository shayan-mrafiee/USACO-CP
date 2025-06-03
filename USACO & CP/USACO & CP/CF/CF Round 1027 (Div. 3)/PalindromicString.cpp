//#include <bits/stdc++.h>
//
//using namespace std;
//
//void solve() {
//    int n, k; cin >> n >> k;
//    string s; cin >> s;
//    
//    int good_pairs = 0, one_add = 0, one_take = 0,
//    zero_add = 0, zero_take = 0;
//    for (int i = 0; i < n/2; i++) {
//        if (s[i] == s[n-i-1]) {
//            good_pairs++;
//            if (s[i] == '1') one_take++;
//            else zero_take++;
//        }
//        else if (s[i] == '1') one_add++;
//        else zero_add++;
//    }
//    
//    if (good_pairs == k) {
//        cout << "YES\n";
//        return;
//    }
//    
//    if ((k - good_pairs) % 2) {
//        cout << "NO\n";
//        return;
//    }
//    
//    if (good_pairs < k) {
//        int diff = k - good_pairs;
//        cout << ((min(one_add, zero_add)*2 >= diff) ? "YES\n" :
//                 "NO\n");
//    }
//    
//    else {
//        int diff = good_pairs - k;
//        cout << ((min(one_take, zero_take)*2 >= diff) ? "YES\n" : "NO\n");
//    }
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//    
//    int t; cin >> t;
//    
//    while(t--)
//        solve();
//}
