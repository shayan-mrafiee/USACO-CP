//#include <bits/stdc++.h>
//
//using namespace std;
//const int maxN = 200001;
//using ll = long long;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//    
//    int n, k, q; cin >> n >> k >> q;
//    ll diff[maxN] = {}, prefix[maxN] = {};
//    
//    while(n--) {
//        int l, r; cin >> l >> r;
//        diff[l]++;
//        if (r < maxN-1) diff[r+1]--;
//    }
//    
//    for (int i = 1; i < maxN; i++) {
//        diff[i] += diff[i-1];
//        prefix[i] = prefix[i-1] + (diff[i] >= k);
//    }
//    
//    while(q--) {
//        int a, b; cin >> a >> b;
//        cout << prefix[b] - prefix[a-1] << "\n"; 
//    }
//}
