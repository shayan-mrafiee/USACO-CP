//#include <bits/stdc++.h>
//
//using namespace std;
//
//const int MOD = 2019;
//
//int main() {
//    string S; cin >> S;
//    int suffix = 0;
//    int power10 = 1;
//    vector<int> v (2019);
//    v[0] = 1;
//    
//    long long ans = 0;
//    for (int i = S.size()-1; i >= 0; i--) {
//        int digit = S[i] - '0';
//        suffix = (suffix + digit * power10) % MOD;
//        ans += v[suffix];
//        v[suffix]++;
//        power10 = (power10 * 10) % MOD;
//    }
//    
//    cout << ans << "\n";
//}
