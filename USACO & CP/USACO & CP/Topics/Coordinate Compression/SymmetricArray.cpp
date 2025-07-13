//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n; cin >> n;
//    map<ll, int> occuurences;
//    for (int i = 0; i < 2*n; i++) {
//        ll d; cin >> d;
//        occuurences[d]++;
//    }
//    
//    vector<ll> v;
//    for (auto &[d, m] : occuurences) {
//        if (m != 2) {
//            cout << "NO\n";
//            return;
//        }
//        v.push_back(d);
//    }
//    ll sum = 0;
//    for (int i = n-1; i >= 0; i--) {
//        if ((v[i] - sum) % (2 * (i+1)) || v[i] <= sum) {
//            cout << "NO\n";
//            return;
//        }
//        sum += (v[i] - sum)/(i+1);
//    }
//    
//    cout << "YES\n";
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr);
//    
//    int t; cin >> t;
//    while(t--)
//        solve();
//}
