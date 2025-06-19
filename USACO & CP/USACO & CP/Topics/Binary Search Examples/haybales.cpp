//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//
//int main() {
//    freopen("haybales.in", "r", stdin);
//    freopen("haybales.out", "w", stdout);
//    
//    int N, Q; cin >> N >> Q;
//    vector<int> haybales(N);
//    for (int &haybale : haybales) cin >> haybale;
//    
//    sort(haybales.begin(), haybales.end());
//    
//    while(Q--) {
//        int A, B; cin >> A >> B;
//        int r = upper_bound(haybales.begin(), haybales.end(), B) - haybales.begin(),
//        l = lower_bound(haybales.begin(), haybales.end(), A) - haybales.begin();
//        
//        cout << r-l << "\n"; 
//    }
//}
