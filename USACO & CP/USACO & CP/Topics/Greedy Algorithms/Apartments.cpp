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
//    int n, m, k; cin >> n >> m >> k;
//    vector<int> applicants(n), apartments(m);
//    
//    for (int &a : applicants) cin >> a;
//    for (int &b : apartments) cin >> b;
//    
//    sort(all(applicants)); sort(all(apartments));
//    
//    int ans = 0;
//    for (int i = n-1; i >= 0; i--) {
//        while(apartments.size() && apartments.back() - k > applicants[i]) apartments.pop_back();
//        if (apartments.empty()) break;
//        if (abs(applicants[i] - apartments.back()) <= k) {
//            ans++;
//            apartments.pop_back();
//        }
//    }
//    
//    cout << ans << "\n";
//}
