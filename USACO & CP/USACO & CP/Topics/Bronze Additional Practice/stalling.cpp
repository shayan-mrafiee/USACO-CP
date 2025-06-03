//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int N; cin >> N;
//    vector<int> a (N), b (N);
//    vector<ll> c (N, 0);
//    for (int i = 0; i < N; i++) cin >> a[i];
//    for (int i = 0; i < N; i++) cin >> b[i];
//    
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            c[i] += (a[i] <= b[j]) ? 1 : 0;
//        }
//    }
//    
//    sort(c.begin(), c.end());
//    ll ans = 1;
//    
//    for (int i = 0; i < N; i++) {
//        ans *= c[i] - i;
//    }
//    
//    cout << ans << endl;
//}
