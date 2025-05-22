//#include <bits/stdc++.h>
//
//using namespace std;
//
//pair<int, int> minimum(vector<int> a) {
//    int N = a.size();
//    vector<int> dif (N-1);
//    
//    for (int i = 0; i < N-1; i++) {
//        dif[i] = a[i+1] - a[i];
//    }
//    
//    vector<int> v = dif; sort(v.begin(), v.end());
//    
//    for (int i = 0; i < N-1; i++) {
//        if (dif[i] == v[0]) return {dif[i], i}; // {value, index}
//    }
//    
//    return {};
//}
//
//void solve() {
//    int N; cin >> N;
//    vector<int> a(N);
//    long long ans = 0;
//    
//    for (int i = 0; i < N; i++) {
//        cin >> a[i];
//    }
//    
//    sort(a.begin(), a.end());
//    
//    for (int k = 0; k < 2; k++) {
//        pair<int, int> p = minimum(a);
//        ans += p.first;
//        a.erase(a.begin() + p.second, a.begin() + p.second + 2);
//    }
//    
//    cout << ans << endl;
//}
//
//int main() {
//    int T; cin >> T;
//    while(T--)
//        solve();
//}
