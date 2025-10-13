//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long; 
//#define all(x) x.begin(), x.end()
//
//void solve() {
//    int M, K; cin >> M >> K;
//    vector<int> a;
//    int x = 0;
//    for (int i = 0; i < 5; i++) {
//        if (K & (1 << i)) {
//            a.push_back((1 << (1 << i)) - 1);
//            x += a.back();
//        }
//    }
//    
//    int d = M - x;
//    vector<int> b;
//    if (d < 0) goto impossible;
//    else if (d == 1) {
//        if (a[0] == 1) a[0] = 2;
//        else goto impossible;
//    }
//    else if (d & 1)
//        b = {1, 2, (d -3)/2, (d-3)/2};
//    else b = {d/2, d/2};
//    
//    cout << a.size() + b.size() << "\n";
//    for (int &i : a) cout << i << " ";
//    for (int &i : b) cout << i << " ";
//    cout << "\n"; return;
//    
//    impossible:
//    cout << "-1\n";
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
