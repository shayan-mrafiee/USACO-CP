//#include <bits/stdc++.h>
//
//using namespace std;
//const int maxN = 200001;
//using ll = long long;
//
//int main() {
//    int n, k, q; cin >> n >> k >> q;
//    ll dif[maxN+2] = {};
//    
//    for (int i = 0; i < n; i++) {
//        int l, r; cin >> l >> r;
//        dif[l]++; dif[r+1]--;
//    }
//    
//    // convert difference array
//    for (int i = 1; i <= maxN; i++) {
//        dif[i] += dif[i-1];
//    }
//    
//    // construct prefix array
//    ll prefix[maxN+1] = {};
//    for (int i = 1; i <= maxN; i++) {
//        prefix[i] = prefix[i-1] + (dif[i] >= k);
//    }
//    
//    // process queries
//    while(q--) {
//        int a, b;
//        cin >> a >> b;
//        cout << prefix[b] - prefix[a-1] << "\n";
//    }
//}
