//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int N, Q; cin >> N >> Q;
//    vector<int> c (N), t (N), maximum (N);
//    for (int i = 0; i < N; i++) cin >> c[i];
//    for (int i = 0; i < N; i++) {
//        cin >> t[i];
//        maximum[i] = c[i] - t[i];
//    }
//    sort(maximum.begin(), maximum.end());
//    reverse(maximum.begin(), maximum.end());
//    for (int i = 0; i < Q; i++) {
//        int V, S; cin >> V >> S;
//        if (S < maximum[V-1]) cout << "YES\n";
//        else cout << "NO\n";
//    }
//}
