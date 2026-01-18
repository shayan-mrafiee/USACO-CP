//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//#define F first
//#define S second
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("hayfeast.in", "r", stdin);
//    freopen("hayfeast.out", "w", stdout);
//    
//    int N; ll M;
//    cin >> N >> M;
//    vector<pair<int, int>> haybales(N);
//    
//    for (auto &[F, S] : haybales) cin >> F >> S;
//    
//    int l = 0, r = 0;
//    ll flavor = haybales[0].F;
//    int ans = INT32_MAX;
//    
//    multiset<int> spiciness;
//    while(true) {
//        if (flavor < M) {
//            r++;
//            if (r >= N) break;
//            flavor += haybales[r].F;
//            spiciness.insert(haybales[r].S);
//        }
//        else if (l < r) {
//            if (flavor >= M) ans = min(ans, *spiciness.rbegin());
//            spiciness.erase(haybales[l].S);
//            flavor -= haybales[l++].F;
//        }
//        else break; 
//    }
//    
//    cout << ans << "\n";
//}
