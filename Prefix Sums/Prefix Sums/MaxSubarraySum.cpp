//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int n; cin >> n;
//    vector<long long> prefix (n+1);
//    long long minimum = 0;
//    long long ans = LONG_MIN;
//    
//    for (int i = 1; i <= n; i++) {
//        int x; cin >> x;
//        prefix[i] = prefix[i-1] + x;
//        ans = max(ans, prefix[i] - minimum);
//        minimum = min(minimum, prefix[i]);
//    }
//    
//    cout << ans << endl;
//}
