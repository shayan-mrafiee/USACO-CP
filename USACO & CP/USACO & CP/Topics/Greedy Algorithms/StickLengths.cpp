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
//    vector<int> sticks(n);
//    
//    for (int &p : sticks) cin >> p;
//    
//    sort(all(sticks));
//    
//    int x = sticks[n / 2];
//    ll cost = 0; 
//    
//    for (int &p : sticks) {
//        cost += abs(p - x);
//    }
//    
//    cout << cost << "\n";
//}
