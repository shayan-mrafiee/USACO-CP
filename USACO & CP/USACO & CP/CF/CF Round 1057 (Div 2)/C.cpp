//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.rbegin(), x.rend()
//
//void solve() {
//    int n; cin >> n;
//    vector<int> a(n);
//    
//    for (int &i : a) cin >> i;
//    
//    sort(all(a)); // sorts in reverse order
//    
//    map<int, int> num;
//    num[a[0]] = 1;
//    for (int i = 1; i < n; i++) {
//        num[a[i]]++;
//    }
//    for (auto &[_, n] : num) if (n > 1) goto ok;
//    
//    cout << "0\n";
//    return;
//    
//    ok:
//    ll perimeter = 0;
//    queue<int> odds;
//    int sides = 0;
//    vector<pair<int, int>> v(num.begin(), num.end());
//    reverse(v.begin(), v.end());
//    
//    for (auto [s, n] : v) {
//        if (n & 1) {
//            odds.push(s);
//            n--;
//        }
//        perimeter += 1LL * n * s;
//        sides += n;
//    }
//    
//    int m = 2;
//    while(m && !odds.empty()) {
//        if (perimeter > odds.front()) {
//            perimeter += odds.front();
//            m--;
//            sides++;
//        }
//        odds.pop();
//    }
//    
//    cout << (sides < 3 ? 0 : perimeter) << "\n";
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
