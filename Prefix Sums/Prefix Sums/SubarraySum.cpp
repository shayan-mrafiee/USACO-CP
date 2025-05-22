//#include <bits/stdc++.h>
//
//using namespace std;
//using ll = long long;
//
//int main() {
//    int N; cin >> N; 
//    ll prefix = 0, min_prefix = 0, max_sum = LONG_LONG_MIN;
//    for (int i = 0; i < N; i++) {
//        int a; cin >> a;
//        prefix += a;
//        max_sum = max(max_sum, prefix - min_prefix);
//        min_prefix = min(min_prefix, prefix);
//    }
//    
//    cout << max_sum << endl;
//}
