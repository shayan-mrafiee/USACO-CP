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
//    int N; cin >> N;
//    vector<int> A(N);
//    
//    for (int &i : A) cin >> i;
//    
//    ll ans = 0;
//    for (int j = 0; j < 28; j++) {
//        int n[2] = {1, 0}, sum_B = 0;
//        bool b = 0;
//        
//        for (int i = 0; i < N; i++) {
//            sum_B += (A[i] >> j) & 1;
//            b ^= (A[i] >> j) & 1;
//            n[b]++;
//        }
//        
//        ans += (1LL * n[0] * n[1] - sum_B) << j;
//    }
//    
//    cout << ans << "\n";
//}
