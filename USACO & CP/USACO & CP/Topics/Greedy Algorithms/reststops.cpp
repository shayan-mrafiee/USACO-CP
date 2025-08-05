//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("reststops.in", "r", stdin);
//    freopen("reststops.out", "w", stdout);
//    
//    int L, N, rF, rB; cin >> L >> N >> rF >> rB;
//    vector<pair<int, int>> trail(L+1); // [c, next destination]
//    trail[L-1].second = L;
//    
//    for (int i = 0; i < N; i++) {
//        int x, c; cin >> x >> c;
//        trail[x].first = c;
//    }
//    
//    for (int i = L-2; i >= 0; i--) {
//        trail[i].second = trail[i+1].second;
//        if (trail[i+1].first > trail[trail[i].second].first) trail[i].second = i+1;
//    }
//    
//    ll tastiness = 0,
//    x = 0, prev = 0;
//    while(x < L) {
//        ll time = (x - prev) * (rF - rB);
//        tastiness += time * trail[x].first;
//        prev = x;
//        x = trail[x].second;
//    }
//    
//    cout << tastiness << "\n";
//}
