//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//const int MOD = 1e9 + 7;
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int N, Q; cin >> N >> Q;
//    string s; cin >> s;
//    
//    while (Q--) {
//        int p, l, r; cin >> p >> l >> r;
//        int ans = 0;
//        for (int d = l; d <= r; d++) {
//            for (int i = 0; i < p-d; i++) {
//                if (s[i] == 'A' && s[i+d] == 'T') ans++;
//                else if (s[i] == 'T' && s[i+d] == 'A') ans++;
//                else if (s[i] == 'G' && s[i+d] == 'C') ans++;
//                else if (s[i] == 'C' && s[i+d] == 'G') ans++;
//            }
//        }
//        cout << ans << "\n";
//    }
//}
