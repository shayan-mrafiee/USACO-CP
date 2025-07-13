//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int n; cin >> n;
//    vector<int> arr(n);
//    vector<int> occurences(n+1);
//    for (int &a : arr) {
//        cin >> a;
//        occurences[a]++;
//    }
//    
//    int mex = find(all(occurences), 0) - occurences.begin();
//    if (mex == 0) {
//        for (int i = 0; i < n; i++) cout << "1 ";
//        cout << "1\n";
//        return;
//    }
//    
//    sort(occurences.begin(), occurences.begin()+mex);
//    ll before = accumulate(occurences.begin(), occurences.begin()+mex, 0LL) - mex;
//    ll after = 0;
//    if (mex < n) after = accumulate(occurences.begin()+mex, occurences.end(), 0LL);
//    
//    int bound = mex;
//    cout << 1 << ' ';
//    int prev = 1;
//    for (int k = 1; k < n; k++) {
//        if (k > before + after) cout << prev-- << " ";
//        else {
//            int ans = 1;
//            ans += upper_bound(occurences.begin(), occurences.begin()+bound, k) - occurences.begin();
//            prev = ans-1;
//            cout << ans << " ";
//        }
//    }
//    cout << "1\n";
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
