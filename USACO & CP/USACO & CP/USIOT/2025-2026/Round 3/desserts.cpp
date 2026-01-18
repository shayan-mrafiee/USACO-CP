//#include <bits/stdc++.h>
//
//using namespace std;
//#define all(x) x.begin(), x.end()
//
//int main(){
//    int N, P, Q;
//    cin >> N >> P;
//    vector<pair<int, int>> desserts(N);
//    // (sweetness, fruit)
//    
//    for (int i = 0; i < N; i++) {
//        cin >> desserts[i].first;
//    }
//    for (int i = 0; i < N; i++) {
//        cin >> desserts[i].second;
//    }
//    
//    sort(all(desserts));
//    
//    vector<int> prefix(N+1);
//    for (int i = 1; i <= N; i++) {
//        prefix[i] = prefix[i-1] + (desserts[i-1].second == P);
//    }
//    
//    cin >> Q;
//    while (Q--) {
//        int l, r, k;
//        cin >> l >> r >> k;
//        
//        int lo = lower_bound(all(desserts), make_pair(l, -1)) - desserts.begin();
//        int hi = upper_bound(all(desserts), make_pair(r, INT32_MAX)) - desserts.begin();
//        int matches = prefix[hi] - prefix[lo];
//        
//        cout << ((matches >= k) ? "YES\n" : "NO\n");
//    }
//    
//    return 0;
//}
