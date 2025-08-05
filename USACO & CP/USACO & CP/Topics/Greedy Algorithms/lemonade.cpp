//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr); cout.tie(nullptr); 
//    freopen("lemonade.in", "r", stdin);
//    freopen("lemonade.out", "w", stdout);
//    
//    int N; cin >> N;
//    vector<int> w(N);
//    
//    for (int &i : w) cin >> i;
//    
//    sort(w.rbegin(), w.rend());
//    
//    int ans = 0;
//    
//    for (int i = 0; i < N; i++) {
//        ans += (i <= w[i]);
//    }
//    
//    cout << ans << "\n";
//}
