//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = unsigned long long;
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    ll n, k; int m;
//    cin >> n >> m >> k;
//    
//    vector<ll> p(m);
//    for (ll &i : p) cin >> i;
//    
//    int removed = 0, ops = 0;
//    for (int i = 0; i < m; ops++) {
//        ll page = (p[i] - removed + k-1)/k;
//        int r = removed;
//        while (i < m && page * k + r >= p[i]) {
//            removed++;
//            i++;
//        }
//    }
//    
//    cout << ops << "\n";
//}
