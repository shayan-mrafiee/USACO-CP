//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//    int N; cin >> N;
//    int A[N], prefix[N+1], suffix[N+2];
//    prefix[0] = suffix[N+1] = 0; 
//    
//    for (int &i : A) cin >> i;
//    
//    for (int i = 1; i <= N; i++) prefix[i] = gcd(prefix[i-1], A[i-1]);
//    for (int i = N; i >= 1; i--) suffix[i] = gcd(suffix[i+1], A[i-1]);
//    
//    int ans = 0;
//    for (int i = 1; i <= N; i++) {
//        ans = max(ans, gcd(prefix[i-1], suffix[i+1]));
//    }
//    
//    cout << ans << endl; 
//}
