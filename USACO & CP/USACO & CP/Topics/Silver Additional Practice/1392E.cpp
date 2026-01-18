//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr); cout.tie(nullptr);
//    
//    int n; cin >> n;
//    vector<vector<ll>> grid(n, vector<ll>(n));
//    
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (i & 1) grid[i][j] = (1LL << (i+j));
//            cout << grid[i][j] << (j == n-1 ? "\n" : " ");
//        }
//    }
//    cout << flush;
//    
//    int q; cin >> q;
//    while (q--) {
//        ll k; cin >> k;
//        cout << "1 1" << endl;
//        int r = 0, c = 0;
//        for (int i = 0; i < 2*n-2; i++) {
//            if (r+1 < n && grid[r+1][c] == (k & (1LL << (i+1)))) r++;
//            else c++;
//            cout << r+1 << " " << c+1 << endl;
//        }
//    }
//}
