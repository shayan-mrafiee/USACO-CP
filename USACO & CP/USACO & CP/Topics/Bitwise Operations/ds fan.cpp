//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n; cin >> n;
//    int G[2] = {0, 0};
//    vector<int> a(n);
//    
//    for (int &i : a) cin >> i;
//    
//    string s; cin >> s;
//    for (int i = 0; i < n; i++) {
//        G[s[i] - '0'] ^= a[i];
//    }
//    
//    vector<int> prefix(n+1);
//    for (int i = 1; i <= n; i++) {
//        prefix[i] = prefix[i-1] ^ a[i-1];
//    }
//    
//    int q; cin >> q;
//    while(q--) {
//        int op; cin >> op;
//        if (op == 1) {
//            int l, r; cin >> l >> r;
//            int num = prefix[r] ^ prefix[l-1];
//            for (int &i : G) i ^= num;
//        }
//        else {
//            int g; cin >> g;
//            cout << G[g] << " ";
//        }
//    }
//    cout << "\n";
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
